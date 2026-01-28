// 1. ALLOWED ones
// 1.1 member of object expression
a.m
// `a` == rvalue
// `m` == object type's non-static data member

// 1.2 pointer to member of object expression
a.*mp
// `a` == rvalue
// `mp` == pointer -- to -- data member

// 1.3 comma expression
a, b
// b == xvalue

// 1.4 ternary conditional expression
a ? b : c

// 1.5 function call OR overloaded operator expression / 's return type == rvalue reference -- to -- object
std::move(x)

// 1.6 subscript expression
a[n]
// 1 operand == array rvalue

// 1.7 cast expression -- to -- rvalue reference -- to -- object type
static_cast<char&&>(x)

// 1.8 expression / designates a temporary object AFTER temporary materialization
// TODO:

// 1.9 move-eligible expression
// TODO:

