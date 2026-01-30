// 1. == named sets of such requirements
// TODO:

// 2. == predicate /
// 2.1  evaluated | compile time
// TODO:
// 2.2 | being used as a constraint, == part of the interface of a template
// TODO:

// 3. uses: model semantic categories
// TODO:
// 3.1 != model syntactic restrictions
// TODO:

// 4. concept definition
// 4.1 appear | namespace scope
// TODO:
// 4.2 syntax
//      template < template-parameter-list >
//      concept concept-name attr = constraint-expression;
template<class T, class U>
concept Derived = std::is_base_of<U, T>::value;

// 5. ❌can NOT ❌
// 5.1 recursively refer -- to -- themselves
template<typename T>
concept V = V<T*>;  // error: recursive concept
// 5.2 be constrained
//      define the concept
template<class T>
concept C1 = true;
//      C1 T attempts to constrain a concept definition     -- TODO: ?
template<C1 T>
concept Error1 = true;
//      requires attempts to constrain a concept
template<class T> requires C1<T>
concept Error2 = true;

// 6. ❌NOT ALLOWED ❌
// 6.1 explicit instantiations of concepts
// TODO:
// 6.2 explicit specializations of concepts
// TODO:
// 6.3 partial specializations of concepts
// TODO:

// TODO:

int main() {}