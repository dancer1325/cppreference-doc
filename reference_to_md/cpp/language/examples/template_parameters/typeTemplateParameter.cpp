
// 1. `type-parameter-key name`
template<class T>                       // class T
class My_vector { /* ... */ };
// 1.1 `type-parameter-key`
//      Reason: `name` is OPTIONAL
template<class>                         // class
class My_vector_omitting_name { /* ... */ };

// 2. `type-parameter-key name = default`
template<class T = void>                // class T = void
struct My_op_functor { /* ... */ };
// 2.1 `type-parameter-key = default`
template<class = void>                  // class = void
struct My_op_functor_omitting_name;

// 3. `type-parameter-key ... name`
template<typename... Ts>                // typename... Ts
class My_tuple { /* ... */ };
// 3.1 `type-parameter-key ...`
template<typename...>                   // typename...
class My_tuple_omitting_name;

// 4. `type-constraint name`
template<My_concept T>
class My_constrained_vector { /* ... */ };

// 5. `type-constraint name = default`
template<My_concept T = void>
class My_constrained_op_functor { /* ... */ };

// 6. `type-constraint ... name`
template<My_concept... Ts>
class My_constrained_tuple { /* ... */ };
