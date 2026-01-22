// TODO: check
#include <iostream>
#include <cstdlib>  // for malloc/free
#include <new>      // for std::bad_alloc

// =============================================================================
// EXAMPLE 1: GLOBAL overload of operator new/delete
// =============================================================================

// Global operator new (1! object)
void* operator new(std::size_t size) {
    std::cout << "[Global] operator new(" << size << " bytes)\n";
    void* ptr = std::malloc(size);
    if (!ptr) {
        throw std::bad_alloc();
    }
    return ptr;
}

// Global operator delete (1! object)
void operator delete(void* ptr) noexcept {
    std::cout << "[Global] operator delete\n";
    std::free(ptr);
}

// Global operator new[] (array)
void* operator new[](std::size_t size) {
    std::cout << "[Global] operator new[](" << size << " bytes)\n";
    void* ptr = std::malloc(size);
    if (!ptr) {
        throw std::bad_alloc();
    }
    return ptr;
}

// Global operator delete[] (array)
void operator delete[](void* ptr) noexcept {
    std::cout << "[Global] operator delete[]\n";
    std::free(ptr);
}


// =============================================================================
// EXAMPLE 2: Class-specific operator new/delete overload
// =============================================================================

class MyClass {
private:
    int data;
    static int allocationCount;

public:
    MyClass(int d = 0) : data(d) {
        std::cout << "  Constructor MyClass(" << data << ")\n";
    }

    ~MyClass() {
        std::cout << "  Destructor MyClass(" << data << ")\n";
    }

    // Class operator new (single object)
    static void* operator new(std::size_t size) {
        std::cout << "[MyClass] operator new(" << size << " bytes)\n";
        allocationCount++;
        void* ptr = ::operator new(size);  // calls global operator new
        return ptr;
    }

    // Class operator delete (single object)
    static void operator delete(void* ptr) noexcept {
        std::cout << "[MyClass] operator delete\n";
        allocationCount--;
        ::operator delete(ptr);  // calls global operator delete
    }

    // Class operator new[] (array)
    static void* operator new[](std::size_t size) {
        std::cout << "[MyClass] operator new[](" << size << " bytes)\n";
        allocationCount++;
        void* ptr = ::operator new[](size);  // calls global operator new[]
        return ptr;
    }

    // Class operator delete[] (array)
    static void operator delete[](void* ptr) noexcept {
        std::cout << "[MyClass] operator delete[]\n";
        allocationCount--;
        ::operator delete[](ptr);  // calls global operator delete[]
    }

    // Placement new (must be provided when class has operator new)
    static void* operator new(std::size_t size, void* ptr) noexcept {
        std::cout << "[MyClass] placement operator new\n";
        return ptr;  // just returns the pointer, memory already exists
    }

    // Placement delete (only called if constructor throws with placement new)
    static void operator delete(void* ptr, void* place) noexcept {
        // Nothing to do, memory is not owned by us
    }

    static int getAllocationCount() { return allocationCount; }

    void print() const {
        std::cout << "  MyClass.data = " << data << "\n";
    }
};

int MyClass::allocationCount = 0;


// =============================================================================
// EXAMPLE 3: Placement new (not overloadable, but important)
// =============================================================================

void placementNewExample() {
    std::cout << "\n=== PLACEMENT NEW ===\n";

    // Reserve memory without constructing the object
    char buffer[sizeof(MyClass)];
    std::cout << "Buffer reserved on stack\n";

    // Construct object in existing memory (placement new)
    MyClass* obj = new (buffer) MyClass(99);
    std::cout << "Object constructed with placement new\n";
    obj->print();

    // IMPORTANT: call destructor manually
    obj->~MyClass();
    std::cout << "Destructor called manually\n";
    // DO NOT call delete, because memory belongs to buffer
}


// =============================================================================
// EXAMPLE 4: operator new with additional parameters
// =============================================================================

class CustomAllocator {
public:
    int id;

    CustomAllocator(int i) : id(i) {
        std::cout << "  Constructor CustomAllocator(" << id << ")\n";
    }

    ~CustomAllocator() {
        std::cout << "  Destructor CustomAllocator(" << id << ")\n";
    }

    // operator new with extra parameters
    static void* operator new(std::size_t size, const char* label) {
        std::cout << "[CustomAllocator] operator new with label: \"" << label << "\"\n";
        return ::operator new(size);
    }

    // Corresponding operator delete (only called if constructor throws)
    static void operator delete(void* ptr, const char* label) noexcept {
        std::cout << "[CustomAllocator] operator delete with label: \"" << label << "\"\n";
        ::operator delete(ptr);
    }

    // Normal operator delete
    static void operator delete(void* ptr) noexcept {
        std::cout << "[CustomAllocator] operator delete normal\n";
        ::operator delete(ptr);
    }
};


// =============================================================================
// MAIN - Usage examples
// =============================================================================

int main() {
    std::cout << "=== EXAMPLE 1: Single object ===\n";
    MyClass* obj1 = new MyClass(10);
    obj1->print();
    delete obj1;

    std::cout << "\n=== EXAMPLE 2: Array of objects ===\n";
    MyClass* arr = new MyClass[3];  // calls operator new[] and constructor 3 times
    arr[0] = MyClass(1);
    arr[1] = MyClass(2);
    arr[2] = MyClass(3);
    delete[] arr;  // calls destructor 3 times and operator delete[]

    std::cout << "\n=== EXAMPLE 3: Allocation count ===\n";
    std::cout << "Allocation count: " << MyClass::getAllocationCount() << "\n";

    placementNewExample();

    std::cout << "\n=== EXAMPLE 4: operator new with parameters ===\n";
    CustomAllocator* custom = new ("MyLabel") CustomAllocator(42);
    delete custom;

    std::cout << "\n=== EXAMPLE 5: Difference between new and operator new ===\n";
    std::cout << "- 'new MyClass(10)' does 2 things:\n";
    std::cout << "  1. Calls operator new to allocate memory\n";
    std::cout << "  2. Calls constructor MyClass(10)\n\n";
    std::cout << "- 'delete obj' does 2 things:\n";
    std::cout << "  1. Calls destructor ~MyClass()\n";
    std::cout << "  2. Calls operator delete to free memory\n";

    return 0;
}

/*
IMPORTANT NOTES:

1. DIFFERENCE between 'new' and 'operator new':
   - new = complete operator (allocates + constructs)
   - operator new = only allocates memory (like malloc)

2. CALL ORDER:
   new MyClass(10):
     a) operator new(sizeof(MyClass))  // allocates memory
     b) MyClass::MyClass(10)            // constructs object

   delete obj:
     a) MyClass::~MyClass()             // destroys object
     b) operator delete(ptr)            // frees memory

3. ARRAY vs SINGLE:
   - new[]     calls operator new[]
   - delete[]  calls operator delete[]
   - new       calls operator new
   - delete    calls operator delete

4. OVERLOADING:
   - Global: affects ALL types
   - Per class: only affects that class
   - With parameters: allows customization

5. PLACEMENT NEW:
   - Constructs object in existing memory
   - Does not allocate new memory
   - You must call destructor manually
   - DO NOT use delete (memory is not from heap)
*/
