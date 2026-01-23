// 1. using identifier attr = type-id
// TODO:

// 2. template < template-parameter-list >
//    using identifier attr = type-id ;
template<class T>
struct Alloc {};

template<class T>
using Vec = vector<T, Alloc<T>>;    // type-id == vector<T, Alloc<T>>

Vec<int> v; // Vec<int> is the same as vector<int, Alloc<int>>