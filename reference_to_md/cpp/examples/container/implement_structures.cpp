#include <vector>
#include <iostream>

// Binary Heap using vector
class MinHeap {
    std::vector<int> heap;
public:
    void insert(int val) {
        heap.push_back(val);
        // Bubble up
        int i = heap.size() - 1;
        while (i > 0 && heap[i] < heap[(i-1)/2]) {
            std::swap(heap[i], heap[(i-1)/2]);
            i = (i-1)/2;
        }
    }
    int getMin() { return heap[0]; }
    
    void printStructure() {
        std::cout << "Vector: ";
        for (int x : heap) std::cout << x << " ";
        std::cout << "\nTree relations:" << std::endl;
        for (int i = 0; i < heap.size(); i++) {
            std::cout << "heap[" << i << "]=" << heap[i];
            if (i > 0) std::cout << " parent=" << heap[(i-1)/2];
            std::cout << std::endl;
        }
    }
};

int main() {
    MinHeap heap;
    heap.insert(10);
    heap.insert(5);
    heap.insert(8);
    heap.insert(2);
    std::cout << "Min: " << heap.getMin() << std::endl;
    heap.printStructure();
    
    return 0;
}
