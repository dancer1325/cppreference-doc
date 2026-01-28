# allows: classify expressions -- by -- their values
* [classify.cpp](classify.cpp)
  * check the source code
  * run
    * `clang++ -std=c++20 classify.cpp -o classify`
    * `./classify`

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

# Primary categories
## `_lvalue_`
### == glvalue / is NOT a xvalue
* [here](lValueIsGlValueThatItsNotXValue.cpp)
### ️ORIGINALLY, == assignment expression's left-hand (_l_) side
* TODO:
### ❌RIGHT now, NOT ALWAYS❌
* TODO:
### lvalue expressions
* [lValueExpressions.cpp](lValueExpressions.cpp)
### TODO:
## `_prvalue_`
### == “pure” rvalue
* TODO:
### == expression /

#### ALLOWED ones
* [prvalue.cpp](prvalue.cpp)
## `xvalue`
* TODO: 

# Mixed categories
## `glvalue`
* TODO:
## `rvalue`
* TODO:

# Special categories
* TODO: 

# TODO:
* TODO: