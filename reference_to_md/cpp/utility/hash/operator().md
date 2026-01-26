 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::hash`](../hash.html "cpp/utility/hash")

[hash::hash](hash.html "cpp/utility/hash/hash")  
---  
**hash::operator()**  
  


Specializations of [std::hash](../hash.html "cpp/utility/hash") should define an `operator()` that: 

  * Takes a single argument key of type `Key`. 
  * Returns a value of type [std::size_t](../../types/size_t.html) that represents the hash value of key. 
  * For two parameters `k1` and `k2` that are equal, [std::hash](../hash.html)<Key>()(k1) == [std::hash](../hash.html)<Key>()(k2). 
  * For two different parameters `k1` and `k2` that are not equal, the probability that [std::hash](../hash.html)<Key>()(k1) == [std::hash](../hash.html)<Key>()(k2) should be very small, approaching 1.0 / [std::numeric_limits](../../types/numeric_limits.html)<size_t>::max(). 



## Contents

  * [1 Parameters](operator\(\).html#Parameters)
  * [2 Return value](operator\(\).html#Return_value)
  * [3 Exceptions](operator\(\).html#Exceptions)
  * [4 Example](operator\(\).html#Example)

  
---  
  
### Parameters

key  |  \-  |  the object to be hashed   
---|---|---  
  
### Return value

A [std::size_t](../../types/size_t.html) representing the hash value. 

### Exceptions

Hash functions should not throw exceptions. 

### Example

The following code shows how to specialize the [std::hash](../hash.html "cpp/utility/hash") template for a custom class. The hash function uses [Fowler–Noll–Vo](https://en.wikipedia.org/wiki/Fowler%E2%80%93Noll%E2%80%93Vo_hash_function "enwiki:Fowler–Noll–Vo hash function") hash algorithm.

Run this code
    
    
    #include <cstdint>
    #include <functional>
    #include <iostream>
    #include <string>
     
    struct Employee
    {
        [std::string](../../string/basic_string.html) name;
        [std::uint64_t](../../types/integer.html) ID;
    };
     
    namespace std
    {
        template <>
        class hash<Employee>
        {
        public:
            [std::uint64_t](../../types/integer.html) operator()(const Employee& employee) const
            {
                 // computes the hash of an employee using a variant
                 // of the Fowler-Noll-Vo hash function
                 constexpr [std::uint64_t](../../types/integer.html) prime{0x100000001B3};
                 [std::uint64_t](../../types/integer.html) result{0xcbf29ce484222325};
     
                 for ([std::uint64_t](../../types/integer.html) i{}, ie = employee.name.size(); i != ie; ++i)
                     result = (result * prime) ^ employee.name[i];
     
                 return result ^ (employee.ID << 1);
             }
        };
    }
     
    int main()
    {
        Employee employee;
        employee.name = "Zaphod Beeblebrox";
        employee.ID = 42;
     
        [std::hash](../hash.html)<Employee> hash_fn;
        [std::cout](../../io/cout.html) << hash_fn(employee) << '\n';
    }

Output: 
    
    
    12615575401975788567
