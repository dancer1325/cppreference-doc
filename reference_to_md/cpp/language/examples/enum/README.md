# syntax
* TODO:
# Unscoped enumerations
## `enum-key`: ONLY ALLOWED `enum`
* see [unscoped enumerations' syntax](#syntax-1)

## `enumerator`
### visible | enclosing scope
* [unscopedEnumerations.cpp](unscopedEnumerations.cpp)
### EACH one is associated -- with a -- underlying type's value
* [unscopedEnumerations.cpp](unscopedEnumerations.cpp)

## if name is omitted -> declaration ONLY introduces the enumerators | enclosing scope
* [unscopedEnumerations.cpp](unscopedEnumerations.cpp)

## if the unscoped enumeration is a class member -> its enumerators may be -- , via class member access operators (`.` & `- >`), -- accessed
* [unscopedEnumerations.cpp](unscopedEnumerations.cpp)

## syntax
### (1)
* TODO: 
#### underlying type
##### NOT specified
* [unscopedEnumerationSyntaxFirst.cpp](unscopedEnumerationSyntaxFirst.cpp)
##### implementation-defined integral type / can represent ALL enumerator values
* TODO:
##### by default,
###### int
* [unscopedEnumerationSyntaxFirst.cpp](unscopedEnumerationSyntaxFirst.cpp)
###### if there is SOME enumerator / can NOT fit | `int` OR `unsigned int` -> higher numerical value (_Example:_ `long`, `unsigned long`, ...)
* TODO:
###### if the first enumerator does NOT have `=` -> 's value == 0
* [unscopedEnumerationSyntaxFirst.cpp](unscopedEnumerationSyntaxFirst.cpp)
###### if the REST of enumerator do NOT have `=` -> 's value == previous enumerator's value + 1
* [unscopedEnumerationSyntaxFirst.cpp](unscopedEnumerationSyntaxFirst.cpp)
##### if the `enumerator-list` is empty -> enumeration has 1! enumerator / value 0
* [unscopedEnumerationSyntaxFirst.cpp](unscopedEnumerationSyntaxFirst.cpp)
## TODO: