# allows: classify expressions -- by -- their values
* [classify.cpp](classify.cpp)

# ALLOWED ones
## `_prvalue_`
* [here](#_prvalue_-1)
## `_xvalue_`

## `_lvalue_`
* [here](#_lvalue_-1)
## `_rvalue_`
* TODO:


# result object's properties
## ALLOWED ones
* [resultObjectPropertiesAllowedOnes.cpp](resultObjectPropertiesAllowedOnes.cpp)
## uses |
### non-void discarded expressions
* TODO:
### every class
* TODO:
#### EXCEPT to, == operand of `decltype`
* TODO:
### array prvalue
* TODO:
#### EXCEPT to, == operand of `decltype`
* TODO:


# `_prvalue_`
## == “pure” rvalue
* TODO:
## == expression /

### ALLOWED ones
* [prvalue.cpp](prvalue.cpp)

# `_lvalue_`
## == glvalue / is NOT a xvalue
* [here](lValueIsGlValueThatItsNotXValue.cpp)
## ️ORIGINALLY, == assignment expression's left-hand (_l_) side
* TODO:
## ❌RIGHT now, NOT ALWAYS❌
* TODO:
## lvalue expressions
* [lValueExpressions.cpp](lValueExpressions.cpp)
## TODO:


# TODO:
* TODO: