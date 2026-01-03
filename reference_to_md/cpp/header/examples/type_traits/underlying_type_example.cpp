#include <iostream>
#include <type_traits>
#include <typeinfo>

// Enums with different underlying types
enum Color : int { RED, GREEN, BLUE };
enum class Status : char { ACTIVE = 'A', INACTIVE = 'I' };
enum Size { SMALL = 1, MEDIUM = 100, LARGE = 1000 };  // compiler chooses underlying type

int main() {
    std::cout << "=== std::underlying_type Examples ===\n\n";
    
    // 1. Basic usage - get underlying type
    std::cout << "1. Underlying types:\n";
    std::cout << "Color underlying type: " << typeid(std::underlying_type_t<Color>).name() << std::endl;    // i    == int
    std::cout << "Status underlying type: " << typeid(std::underlying_type_t<Status>).name() << std::endl;  // c    == char
    std::cout << "Size underlying type: " << typeid(std::underlying_type_t<Size>).name() << std::endl;      // j    == unsigned int
    
    // 2. Check if types are the same
    std::cout << "\n2. Type comparisons:\n";
    std::cout << "Color underlying is int: " << std::is_same_v<std::underlying_type_t<Color>, int> << std::endl;
    std::cout << "Status underlying is char: " << std::is_same_v<std::underlying_type_t<Status>, char> << std::endl;
    
    // 3. Convert enum to underlying type
    std::cout << "\n3. Converting to underlying type:\n";
    Color c = BLUE;
    Status s = Status::ACTIVE;
    
    // Using static_cast
    auto color_value = static_cast<std::underlying_type_t<Color>>(c);
    auto status_value = static_cast<std::underlying_type_t<Status>>(s);
    
    std::cout << "BLUE as int: " << color_value << std::endl;
    std::cout << "ACTIVE as char: " << status_value << " ('" << static_cast<char>(status_value) << "')" << std::endl;
    
    // 4. Practical use case - safe enum arithmetic
    std::cout << "\n4. Safe enum arithmetic:\n";
    
    auto next_color = static_cast<Color>(
        (static_cast<std::underlying_type_t<Color>>(c) + 1) % 3
    );
    
    std::cout << "Next color after BLUE: " << static_cast<int>(next_color) << std::endl;
    
    // 5. Template function using underlying_type
    auto print_enum_info = [](auto enum_value) {
        using EnumType = decltype(enum_value);
        using UnderlyingType = std::underlying_type_t<EnumType>;
        
        std::cout << "Enum value: " << static_cast<UnderlyingType>(enum_value) << std::endl;
        std::cout << "Underlying type size: " << sizeof(UnderlyingType) << " bytes" << std::endl;
    };
    
    std::cout << "\n5. Template function example:\n";
    std::cout << "Color info:\n";
    print_enum_info(Color::RED);
    
    std::cout << "Status info:\n";
    print_enum_info(Status::INACTIVE);
    
    return 0;
}
