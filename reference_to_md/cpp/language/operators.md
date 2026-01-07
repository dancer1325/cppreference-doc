* goal
  * how to customize the C++ operators -- for -- operands of user-defined types

## Contents

  * [1 Syntax](operators.html#Syntax)
  * [2 Explanation](operators.html#Explanation)
    * [2.1 Static overloaded operators](operators.html#Static_overloaded_operators)
  * [3 Restrictions](operators.html#Restrictions)
  * [4 Canonical implementations](operators.html#Canonical_implementations)
    * [4.1 Assignment operator](operators.html#Assignment_operator)
    * [4.2 Stream extraction and insertion](operators.html#Stream_extraction_and_insertion)
    * [4.3 Function call operator](operators.html#Function_call_operator)
    * [4.4 Increment and decrement](operators.html#Increment_and_decrement)
    * [4.5 Binary arithmetic operators](operators.html#Binary_arithmetic_operators)
    * [4.6 Comparison operators](operators.html#Comparison_operators)
    * [4.7 Array subscript operator](operators.html#Array_subscript_operator)
    * [4.8 Bitwise arithmetic operators](operators.html#Bitwise_arithmetic_operators)
    * [4.9 Boolean negation operator](operators.html#Boolean_negation_operator)
    * [4.10 Rarely overloaded operators](operators.html#Rarely_overloaded_operators)
  * [5 Notes](operators.html#Notes)
  * [6 Keywords](operators.html#Keywords)
  * [7 Example](operators.html#Example)
  * [8 Defect reports](operators.html#Defect_reports)
  * [9 See also](operators.html#See_also)
  * [10 External links](operators.html#External_links)
  
---  
  
### Syntax

* Operator functions
  * == functions / special function names   

* (1)
    ```
    operator op
    ```
  * `op`
    * ALLOWED ones: `+ - * / % ^ & | ~ ! = < > += -= *= /= %= ^= &= |= << >> >>= <<= == != <= >= <=>(since C++20) && || ++ \-- , ->* -> () []`

* (2)
    ```
    operator new
    operator new []
    ```
* (3)
    ```
    operator delete
    operator delete []	
    ```
* (4)
  * | C++20
    ```
    operator co_await
    ```
  
* TODO: 
1) An overloaded punctuation operator.

2) An [allocation function](../memory/new/operator_new.html "cpp/memory/new/operator new").

3) A [deallocation function](../memory/new/operator_delete.html "cpp/memory/new/operator delete").

4) An overloaded co_await operator for use in [co_await expressions](coroutines.html#co_await "cpp/language/coroutines").

The behaviors of non-punctuation operators are described in their own respective pages. Unless otherwise specified, the remaining description in this page does not apply to these functions. 

### Explanation

When an operator appears in an [expression](expressions.html "cpp/language/expressions"), and at least one of its operands has a [class type](class.html "cpp/language/class") or an [enumeration type](enum.html "cpp/language/enum"), then [overload resolution](overload_resolution.html "cpp/language/overload resolution") is used to determine the user-defined function to be called among all the functions whose signatures match the following: 

Expression  | As member function  | As non-member function  | Example   
---|---|---|---  
@a  | (a).operator@ ( )  | operator@ (a)  | ![std::cin](../io/cin.html) calls [std::cin](../io/cin.html).operator!()  
a@b  | (a).operator@ (b)  | operator@ (a, b)  | [std::cout](../io/cout.html) << 42 calls [std::cout](../io/cout.html).operator<<(42)  
a=b  | (a).operator= (b)  |  cannot be non-member  | Given [std::string](../string/basic_string.html) s;, s = "abc"; calls s.operator=("abc")  
a(b...)  | (a).operator()(b...)  |  cannot be non-member  | Given [std::random_device](../numeric/random/random_device.html) r;, auto n = r(); calls r.operator()()  
a[b...]  | (a).operator[](b...)  |  cannot be non-member  | Given [std::map](../container/map.html)<int, int> m;, m[1] = 2; calls m.operator[](1)  
a-> | (a).operator->( )  |  cannot be non-member  | Given [std::unique_ptr](../memory/unique_ptr.html)<S> p;, p->bar() calls p.operator->()  
a@  | (a).operator@ (0)  | operator@ (a, 0)  | Given [std::vector](../container/vector.html)<int>::iterator i;, i++ calls i.operator++(0)  
In this table, `**@**` is a placeholder representing all matching operators: all prefix operators in @a, all postfix operators other than -> in a@, all infix operators other than = in a@b.   
In addition, for comparison operators ==, !=, <, >, <=, >=, <=>, overload resolution also considers the [rewritten candidates](overload_resolution.html#Call_to_an_overloaded_operator "cpp/language/overload resolution") operator== or operator<=>.  | (since C++20)  
---|---  
  
Overloaded operators (but not the built-in operators) can be called using function notation: 
    
    
    [std::string](../string/basic_string.html) str = "Hello, ";
    str.operator+=("world");                      // same as str += "world";
    operator<<(operator<<([std::cout](../io/cout.html), str), '\n'); // same as std::cout << str << '\n';
                                                  // (since C++17) except for sequencing

####  Static overloaded operators

Overloaded operators that are member functions can be declared [static](static.html#Static_member_functions "cpp/language/static"). However, this is only allowed for operator() and operator[]. Such operators can be called using function notation. However, when these operators appear in expressions, they still require an object of class type. 
    
    


| (since C++23)  
---|---  
  
### Restrictions

  * An operator function must have at least one function parameter or implicit object parameter whose type is a class, a reference to a class, an enumeration, or a reference to an enumeration. 
  * The operators `**::**` (scope resolution), `**.**` (member access), `**.***` (member access through pointer to member), and `**?:**` (ternary conditional) cannot be overloaded. 
  * New operators such as `******`, `**< >**`, or `**& |**` cannot be created. 
  * It is not possible to change the precedence, grouping, or number of operands of operators. 
  * The overload of operator `**- >**` must either return a raw pointer, or return an object (by reference or by value) for which operator `**- >**` is in turn overloaded. 
  * The overloads of operators `**& &**` and `**||**` lose short-circuit evaluation. 



  * `**& &**`, `**||**`, and `**,**` lose their special [sequencing properties](eval_order.html "cpp/language/eval order") when overloaded and behave like regular function calls even when they are used without function-call notation. 

| (until C++17)  
---|---  
  
### Canonical implementations

Besides the restrictions above, the language puts no other constraints on what the overloaded operators do, or on the return type (it does not participate in overload resolution), but in general, overloaded operators are expected to behave as similar as possible to the built-in operators: operator+ is expected to add, rather than multiply its arguments, operator= is expected to assign, etc. The related operators are expected to behave similarly (operator+ and operator+= do the same addition-like operation). The return types are limited by the expressions in which the operator is expected to be used: for example, assignment operators return by reference to make it possible to write a = b = c = d, because the built-in operators allow that. 

Commonly overloaded operators have the following typical, canonical forms:[[1]](operators.html#cite_note-1)

#### Assignment operator

The assignment operator operator= has special properties: see [copy assignment](as_operator.html "cpp/language/copy assignment") and [move assignment](move_operator.html "cpp/language/move assignment") for details. 

The canonical copy-assignment operator is expected to [be safe on self-assignment](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#c62-make-copy-assignment-safe-for-self-assignment), and to return the lhs by reference: 
    
    
    // copy assignment
    T& operator=(const T& other)
    {
        // Guard self assignment
        if (this == &other)
            return *this;
     
        // assume *this manages a reusable resource, such as a heap-allocated buffer mArray
        if (size != other.size)           // resource in *this cannot be reused
        {
            temp = new int[other.size];   // allocate resource, if throws, do nothing
            delete[] mArray;              // release resource in *this
            mArray = temp;
            size = other.size;
        }
     
        [std::copy](../algorithm/copy.html)(other.mArray, other.mArray + other.size, mArray);
        return *this;
    }

The canonical move assignment is expected to [leave the moved-from object in valid state](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#c64-a-move-operation-should-move-and-leave-its-source-in-a-valid-state) (that is, a state with class invariants intact), and either [do nothing](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#c65-make-move-assignment-safe-for-self-assignment) or at least leave the object in a valid state on self-assignment, and return the lhs by reference to non-const, and be noexcept: 
    
    
    // move assignment
    T& operator=(T&& other) noexcept
    {
        // Guard self assignment
        if (this == &other)
            return *this; // delete[]/size=0 would also be ok
     
        delete[] mArray;                               // release resource in *this
        mArray = [std::exchange](../utility/exchange.html)(other.mArray, nullptr); // leave other in valid state
        size = [std::exchange](../utility/exchange.html)(other.size, 0);
        return *this;
    }

| (since C++11)  
---|---  
  
In those situations where copy assignment cannot benefit from resource reuse (it does not manage a heap-allocated array and does not have a (possibly transitive) member that does, such as a member [std::vector](../container/vector.html "cpp/container/vector") or [std::string](../string/basic_string.html "cpp/string/basic string")), there is a popular convenient shorthand: the copy-and-swap assignment operator, which takes its parameter by value (thus working as both copy- and move-assignment depending on the value category of the argument), swaps with the parameter, and lets the destructor clean it up. 
    
    
    // copy assignment (copy-and-swap idiom)
    T& T::operator=(T other) noexcept // call copy or move constructor to construct other
    {
        [std::swap](../algorithm/swap.html)(size, other.size); // exchange resources between *this and other
        [std::swap](../algorithm/swap.html)(mArray, other.mArray);
        return *this;
    } // destructor of other is called to release the resources formerly managed by *this

This form automatically provides [strong exception guarantee](exceptions.html#Exception_safety "cpp/language/exceptions"), but prohibits resource reuse. 

#### Stream extraction and insertion

The overloads of `operator>>` and `operator<<` that take a [std::istream](../io/basic_istream.html)& or [std::ostream](../io/basic_ostream.html)& as the left hand argument are known as insertion and extraction operators. Since they take the user-defined type as the right argument (`b` in `_a @ b_`), they must be implemented as non-members. 
    
    
    [std::ostream](../io/basic_ostream.html)& operator<<([std::ostream](../io/basic_ostream.html)& os, const T& obj)
    {
        // write obj to stream
        return os;
    }
     
    [std::istream](../io/basic_istream.html)& operator>>([std::istream](../io/basic_istream.html)& is, T& obj)
    {
        // read obj from stream
        if (/* T could not be constructed */)
            is.setstate(std::ios::failbit);
        return is;
    }

These operators are sometimes implemented as [friend functions](friend.html "cpp/language/friend"). 

#### Function call operator

When a user-defined class overloads the function call operator operator(), it becomes a [FunctionObject](../named_req/FunctionObject.html "cpp/named req/FunctionObject") type. 

An object of such a type can be used in a function call expression: 
    
    
    // An object of this type represents a linear function of one variable a * x + b.
    struct Linear
    {
        double a, b;
     
        double operator()(double x) const
        {
            return a * x + b;
        }
    };
     
    int main()
    {
        Linear f{2, 1};  // Represents function 2x + 1.
        Linear g{-1, 0}; // Represents function -x.
        // f and g are objects that can be used like a function.
     
        double f_0 = f(0);
        double f_1 = f(1);
     
        double g_0 = g(0);
    }

Many standard library [algorithms](../algorithm.html "cpp/algorithm") accept [FunctionObjects](../named_req/FunctionObject.html "cpp/named req/FunctionObject") to customize behavior. There are no particularly notable canonical forms of operator(), but to illustrate the usage: 

Run this code
    
    
    #include <algorithm>
    #include <iostream>
    #include <vector>
     
    struct Sum
    {
        int sum = 0;
        void operator()(int n) { sum += n; }
    };
     
    int main()
    {
        [std::vector](../container/vector.html)<int> v = {1, 2, 3, 4, 5};
        Sum s = [std::for_each](../algorithm/for_each.html)(v.begin(), v.end(), Sum());
        [std::cout](../io/cout.html) << "The sum is " << s.sum << '\n';
    }

Output: 
    
    
    The sum is 15

#### Increment and decrement

When the postfix increment or decrement operator appears in an expression, the corresponding user-defined function (operator++ or operator\--) is called with an integer argument ​0​. Typically, it is declared as T operator++(int) or T operator\--(int), where the argument is ignored. The postfix increment and decrement operators are usually implemented in terms of the prefix versions: 
    
    
    struct X
    {
        // prefix increment
        X& operator++()
        {
            // actual increment takes place here
            return *this; // return new value by reference
        }
     
        // postfix increment
        X operator++(int)
        {
            X old = *this; // copy old value
            operator++();  // prefix increment
            return old;    // return old value
        }
     
        // prefix decrement
        X& operator--()
        {
            // actual decrement takes place here
            return *this; // return new value by reference
        }
     
        // postfix decrement
        X operator--(int)
        {
            X old = *this; // copy old value
            operator--();  // prefix decrement
            return old;    // return old value
        }
    };

Although the canonical implementations of the prefix increment and decrement operators return by reference, as with any operator overload, the return type is user-defined; for example the overloads of these operators for [std::atomic](../atomic/atomic.html "cpp/atomic/atomic") return by value. 

#### Binary arithmetic operators

Binary operators are typically implemented as non-members to maintain symmetry (for example, when adding a complex number and an integer, if operator+ is a member function of the complex type, then only complex + integer would compile, and not integer + complex). Since for every binary arithmetic operator there exists a corresponding compound assignment operator, canonical forms of binary operators are implemented in terms of their compound assignments: 
    
    
    class X
    {
    public:
        X& operator+=(const X& rhs) // compound assignment (does not need to be a member,
        {                           // but often is, to modify the private members)
            /* addition of rhs to *this takes place here */
            return *this; // return the result by reference
        }
     
        // friends defined inside class body are inline and are hidden from non-ADL lookup
        friend X operator+(X lhs,        // passing lhs by value helps optimize chained a+b+c
                           const X& rhs) // otherwise, both parameters may be const references
        {
            lhs += rhs; // reuse compound assignment
            return lhs; // return the result by value (uses move constructor)
        }
    };

#### Comparison operators

Standard library algorithms such as [std::sort](../algorithm/sort.html "cpp/algorithm/sort") and containers such as [std::set](../container/set.html "cpp/container/set") expect operator< to be defined, by default, for the user-provided types, and expect it to implement strict weak ordering (thus satisfying the [Compare](../named_req/Compare.html "cpp/named req/Compare") requirements). An idiomatic way to implement strict weak ordering for a structure is to use lexicographical comparison provided by [std::tie](../utility/tuple/tie.html "cpp/utility/tuple/tie"): 
    
    
    struct Record
    {
        [std::string](../string/basic_string.html) name;
        unsigned int floor;
        double weight;
     
        friend bool operator<(const Record& l, const Record& r)
        {
            return [std::tie](../utility/tuple/tie.html)(l.name, l.floor, l.weight)
                 < [std::tie](../utility/tuple/tie.html)(r.name, r.floor, r.weight); // keep the same order
        }
    };

Typically, once operator< is provided, the other relational operators are implemented in terms of operator<. 
    
    
    inline bool operator< (const X& lhs, const X& rhs) { /* do actual comparison */ }
    inline bool operator> (const X& lhs, const X& rhs) { return rhs < lhs; }
    inline bool operator<=(const X& lhs, const X& rhs) { return !(lhs > rhs); }
    inline bool operator>=(const X& lhs, const X& rhs) { return !(lhs < rhs); }

Likewise, the inequality operator is typically implemented in terms of operator==: 
    
    
    inline bool operator==(const X& lhs, const X& rhs) { /* do actual comparison */ }
    inline bool operator!=(const X& lhs, const X& rhs) { return !(lhs == rhs); }

When three-way comparison (such as [std::memcmp](../string/byte/memcmp.html "cpp/string/byte/memcmp") or [std::string::compare](../string/basic_string/compare.html "cpp/string/basic string/compare")) is provided, all six two-way comparison operators may be expressed through that: 
    
    
    inline bool operator==(const X& lhs, const X& rhs) { return cmp(lhs,rhs) == 0; }
    inline bool operator!=(const X& lhs, const X& rhs) { return cmp(lhs,rhs) != 0; }
    inline bool operator< (const X& lhs, const X& rhs) { return cmp(lhs,rhs) <  0; }
    inline bool operator> (const X& lhs, const X& rhs) { return cmp(lhs,rhs) >  0; }
    inline bool operator<=(const X& lhs, const X& rhs) { return cmp(lhs,rhs) <= 0; }
    inline bool operator>=(const X& lhs, const X& rhs) { return cmp(lhs,rhs) >= 0; }

#### Array subscript operator

User-defined classes that provide array-like access that allows both reading and writing typically define two overloads for operator[]: const and non-const variants: 
    
    
    struct T
    {
              value_t& operator[]([std::size_t](../types/size_t.html) idx)       { return mVector[idx]; }
        const value_t& operator[]([std::size_t](../types/size_t.html) idx) const { return mVector[idx]; }
    };

Alternatively, they can be expressed as a single member function template using an [explicit object parameter](member_functions.html#Explicit_object_parameter "cpp/language/member functions"): 
    
    
    struct T
    {
        decltype(auto) operator[](this auto& self, [std::size_t](../types/size_t.html) idx) 
        { 
            return self.mVector[idx]; 
        }
    };

| (since C++23)  
---|---  
  
If the value type is known to be a scalar type, the const variant should return by value. 

Where direct access to the elements of the container is not wanted or not possible or distinguishing between lvalue c[i] = v; and rvalue v = c[i]; usage, operator[] may return a proxy. See for example [std::bitset::operator[]](../utility/bitset/operator_at.html "cpp/utility/bitset/operator at"). 

operator[] can only take one subscript. In order to provide multidimensional array access semantics, e.g. to implement a 3D array access a[i][j][k] = x;, operator[] has to return a reference to a 2D plane, which has to have its own operator[] which returns a reference to a 1D row, which has to have operator[] which returns a reference to the element. To avoid this complexity, some libraries opt for overloading operator() instead, so that 3D access expressions have the Fortran-like syntax a(i, j, k) = x;.  | (until C++23)  
---|---  
operator[] can take any number of subscripts. For example, an operator[] of a 3D array class declared as T& operator[]([std::size_t](../types/size_t.html) x, [std::size_t](../types/size_t.html) y, [std::size_t](../types/size_t.html) z); can directly access the elements.  Run this code
    
    
    #include <array>
    #include <cassert>
    #include <iostream>
     
    template<typename T, [std::size_t](../types/size_t.html) Z, [std::size_t](../types/size_t.html) Y, [std::size_t](../types/size_t.html) X>
    struct Array3d
    {
        [std::array](../container/array.html)<T, X * Y * Z> m{};
     
        constexpr T& operator[]([std::size_t](../types/size_t.html) z, [std::size_t](../types/size_t.html) y, [std::size_t](../types/size_t.html) x) // C++23
        {
            [assert](../error/assert.html)(x < X and y < Y and z < Z);
            return m[z * Y * X + y * X + x];
        }
    };
     
    int main()
    {
        Array3d<int, 4, 3, 2> v;
        v[3, 2, 1] = 42;
        [std::cout](../io/cout.html) << "v[3, 2, 1] = " << v[3, 2, 1] << '\n';
    }

Output: 
    
    
    v[3, 2, 1] = 42

| (since C++23)  
  
#### Bitwise arithmetic operators

User-defined classes and enumerations that implement the requirements of [BitmaskType](../named_req/BitmaskType.html "cpp/named req/BitmaskType") are required to overload the bitwise arithmetic operators operator&, operator|, operator^, operator~, operator&=, operator|=, and operator^=, and may optionally overload the shift operators operator<< operator>>, operator>>=, and operator<<=. The canonical implementations usually follow the pattern for binary arithmetic operators described above. 

#### Boolean negation operator

The operator operator! is commonly overloaded by the user-defined classes that are intended to be used in boolean contexts. Such classes also provide a user-defined conversion function to boolean type (see [std::basic_ios](../io/basic_ios.html "cpp/io/basic ios") for the standard library example), and the expected behavior of operator! is to return the value opposite of operator bool.  | (until C++11)  
---|---  
Since the built-in operator ! performs [contextual conversion to bool](implicit_cast.html#Contextual_conversions "cpp/language/implicit conversion"), user-defined classes that are intended to be used in boolean contexts could provide only operator bool and need not overload operator!.  | (since C++11)  
  
#### Rarely overloaded operators

The following operators are rarely overloaded: 

  * The address-of operator, operator&. If the unary & is applied to an lvalue of incomplete type and the complete type declares an overloaded operator&, it is unspecified whether the operator has the built-in meaning or the operator function is called. Because this operator may be overloaded, generic libraries use [std::addressof](../memory/addressof.html "cpp/memory/addressof") to obtain addresses of objects of user-defined types. The best known example of a canonical overloaded operator& is the Microsoft class [`CComPtrBase`](https://docs.microsoft.com/en-us/cpp/atl/reference/ccomptrbase-class?view=msvc-160#operator_amp). An example of this operator's use in EDSL can be found in [boost.spirit](https://www.boost.org/doc/libs/release/libs/spirit/doc/html/spirit/qi/reference/operator/and_predicate.html). 
  * The boolean logic operators, operator&& and operator||. Unlike the built-in versions, the overloads cannot implement short-circuit evaluation. Also unlike the built-in versions, they do not sequence their left operand before the right one.(until C++17) In the standard library, these operators are only overloaded for [std::valarray](../numeric/valarray.html "cpp/numeric/valarray"). 
  * The comma operator, operator,. Unlike the built-in version, the overloads do not sequence their left operand before the right one.(until C++17) Because this operator may be overloaded, generic libraries use expressions such as a, void(), b instead of a, b to sequence execution of expressions of user-defined types. The boost library uses operator, in [boost.assign](https://www.boost.org/doc/libs/release/libs/assign/doc/index.html#intro), [boost.spirit](https://github.com/boostorg/spirit/blob/develop/include/boost/spirit/home/qi/string/symbols.hpp#L317), and other libraries. The database access library [SOCI](https://soci.sourceforge.net/doc.html) also overloads operator,. 
  * The member access through pointer to member operator->*. There are no specific downsides to overloading this operator, but it is rarely used in practice. It was suggested that it could be part of a [smart pointer interface](https://www.aristeia.com/Papers/DDJ_Oct_1999.pdf), and in fact is used in that capacity by actors in [boost.phoenix](https://www.boost.org/doc/libs/release/libs/phoenix/doc/html/phoenix/modules/operator.html#phoenix.modules.operator.member_pointer_operator). It is more common in EDSLs such as [cpp.react](https://github.com/schlangster/cpp.react/blob/legacy1/include/react/Signal.h#L557). 



### Notes

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_static_call_operator`](../experimental/feature_test.html#cpp_static_call_operator "cpp/feature test") | [`202207L`](../compiler_support/23.html#cpp_static_call_operator_202207L "cpp/compiler support/23") | (C++23) | static operator()  
[`__cpp_multidimensional_subscript`](../experimental/feature_test.html#cpp_multidimensional_subscript "cpp/feature test") | [`202211L`](../compiler_support/23.html#cpp_multidimensional_subscript_202211L "cpp/compiler support/23") | (C++23) | static operator[]  
  
### Keywords

[`operator`](../keyword/operator.html "cpp/keyword/operator")

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 1481](https://cplusplus.github.io/CWG/issues/1481.html) | C++98  | the non-member prefix increment operator could only have a parameter  
of class type, enumeration type, or a reference type to such types  | no type requirement   
[CWG 2931](https://cplusplus.github.io/CWG/issues/2931.html) | C++23  | explicit object member operator functions could only have no parameter  
of class type, enumeration type, or a reference type to such types  | prohibited   
  
### See also

  * [Operator precedence](operator_precedence.html "cpp/language/operator precedence")
  * [Alternative operator syntax](operator_alternative.html "cpp/language/operator alternative")
  * [Argument-dependent lookup](adl.html "cpp/language/adl")

Common operators   
---  
[assignment](operator_assignment.html "cpp/language/operator assignment") | [increment  
decrement](operator_incdec.html "cpp/language/operator incdec") | [arithmetic](operator_arithmetic.html "cpp/language/operator arithmetic") | [logical](operator_logical.html "cpp/language/operator logical") | [comparison](operator_comparison.html "cpp/language/operator comparison") | [member  
access](operator_member_access.html "cpp/language/operator member access") | [other](operator_other.html "cpp/language/operator other")  
a = b  
a += b  
a -= b  
a *= b  
a /= b  
a %= b  
a &= b  
a |= b  
a ^= b  
a <<= b  
a >>= b |  ++a  
\--a  
a++  
a\-- |  +a  
-a  
a + b  
a - b  
a * b  
a / b  
a % b  
~a  
a & b  
a | b  
a ^ b  
a << b  
a >> b |  !a  
a && b  
a || b |  a == b  
a != b  
a < b  
a > b  
a <= b  
a >= b  
a <=> b |  a[...]  
*a  
&a  
a->b  
a.b  
a->*b  
a.*b | function call  
  
a(...)  
comma  
  
a, b  
conditional  
  
a ? b : c  
Special operators   
[`static_cast`](static_cast.html "cpp/language/static cast") converts one type to another related type  
[`dynamic_cast`](dynamic_cast.html "cpp/language/dynamic cast") converts within inheritance hierarchies  
[`const_cast`](const_cast.html "cpp/language/const cast") adds or removes [cv](cv.html "cpp/language/cv")-qualifiers  
[`reinterpret_cast`](reinterpret_cast.html "cpp/language/reinterpret cast") converts type to unrelated type  
[C-style cast](explicit_cast.html "cpp/language/explicit cast") converts one type to another by a mix of static_cast, const_cast, and reinterpret_cast  
[`new`](new.html "cpp/language/new") creates objects with dynamic storage duration  
[`delete`](delete.html "cpp/language/delete") destructs objects previously created by the new expression and releases obtained memory area  
[`sizeof`](sizeof.html "cpp/language/sizeof") queries the size of a type  
[`sizeof...`](sizeof....html "cpp/language/sizeof...") queries the size of a [pack](parameter_pack.html "cpp/language/pack") (since C++11)  
[`typeid`](typeid.html "cpp/language/typeid") queries the type information of a type  
[`noexcept`](noexcept.html "cpp/language/noexcept") checks if an expression can throw an exception (since C++11)  
[`alignof`](alignof.html "cpp/language/alignof") queries alignment requirements of a type (since C++11)  
  
### External links

  1. [↑](operators.html#cite_ref-1) [Operator Overloading](https://stackoverflow.com/questions/4421706/4421719#4421719) on StackOverflow C++ FAQ

  
---
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
