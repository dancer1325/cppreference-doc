#include <iostream>

struct Point {
  int x, y;
};

Point create_point() {
  return {10, 20};
}

int main()
{
  // ============================================
  // 1. VARIABLE
  // ============================================
  int num = 42;
  Point p = {1, 2};

  // num's result object == VARIABLE 'num'
  std::cout << "num address: " << &num << "\n";

  // 'p'
  //    == expression / 's result object == VARIABLE 'p'
  std::cout << "p address: " << &p << "\n";


  // ============================================
  // 2. OBJECT / created by NEW-EXPRESSION
  // ============================================
  int* ptr = new int(100);
  Point* pptr = new Point{3, 4};

  // '*ptr'
  //    == expression / 's result object == object / cre por 'new int(100)'
  std::cout << "*ptr address: " << ptr << "\n";

  // The expression '*pptr' has as result object:
  //   the OBJECT created by 'new Point{3,4}'
  std::cout << "*pptr address: " << pptr << "\n";


  // ============================================
  // 3. TEMPORARY created by TEMPORARY MATERIALIZATION
  // ============================================
  // A prvalue "materializes" into a temporary object
  const Point& temp_ref = create_point();

  // The expression 'temp_ref' has as result object:
  //   the TEMPORARY created by materialization of create_point()
  std::cout << "temp_ref address: " << &temp_ref << "\n";

  // Another materialization example
  const int& temp_int = 42;  // prvalue '42' materializes
  std::cout << "temp_int address: " << &temp_int << "\n";


  // ============================================
  // 4. MEMBER thereof (member of any of the above)
  // ============================================

  // 4a. Member of VARIABLE
  p.x;  // result object: MEMBER 'x' of variable 'p'
  std::cout << "p.x address: " << &(p.x) << "\n";

  // 4b. Member of OBJECT created by new
  pptr->y;  // result object: MEMBER 'y' of object created by new
  std::cout << "pptr->y address: " << &(pptr->y) << "\n";

  // 4c. Member of TEMPORARY
  create_point().x;  // result object: MEMBER 'x' of temporary
  const int& temp_member = create_point().x;
  std::cout << "temp member address: " << &temp_member << "\n";


  // Cleanup
  delete ptr;
  delete pptr;

  return 0;
}
