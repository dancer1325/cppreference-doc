
// 2. underlying type
// 2.1 NOT specified
enum UnderlyingType { a, b };       // type does NOT appear

// 2.2 implementation-defined integral type / can represent ALL enumerator values
// TODO:

// 2.3 by default, int
enum DefaultIsInt { a, b };

// 2.3.1 if there is SOME enumerator / can NOT fit | `int` OR `unsigned int` -> higher numerical value (_Example:_ `long`, `unsigned long`, ...)
// TODO:
// 2.3.2 if the first enumerator does NOT have `=` -> 's value == 0
// 2.3.3 if the REST of enumerator do NOT have `=` -> 's value == previous enumerator's value + 1
enum Foo { a, b, c = 10, d, e = 1, f, g = f + c };
//a = 0, b = 1, c = 10, d = 11, e = 1, f = 2, g = 12

// 3. if the `enumerator-list` is empty -> enumeration has 1! enumerator / value 0
enum NoEnumerators {};
// 0