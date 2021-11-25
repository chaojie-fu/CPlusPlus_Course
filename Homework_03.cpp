# include <iostream>
# include "MyMatrix3.h"

int main()
{
  size_t num_row = 10;
  size_t num_col = 5;
  MyMatrix3<int> Matrix_exp(num_row, num_col);
  Matrix_exp.setValue(2, 1, 10.0);
  std::cout << "Matrix_exp = " << std::endl;
  Matrix_exp.printMatrix();

  std::cout << "========================================" << std::endl;
  /* test copy constructor
    */
  std::cout << "Test Copy Constructor" << std::endl;
  MyMatrix3<int> Matrix_copy = Matrix_exp;
  std::cout << "Matrix_copy = " << std::endl;
  Matrix_copy.printMatrix();

  std::cout << "========================================" << std::endl;
  /* test assignment operator (=)
    */
  std::cout << "Test Assignment Operator" << std::endl;
  Matrix_exp.setValue(3, 4, 7);
  Matrix_copy = Matrix_exp;
  Matrix_copy.setValue(4, 2, 2);
  std::cout << "Matrix_exp = " << std::endl;
  Matrix_exp.printMatrix();
  std::cout << "Matrix_copy = " << std::endl;
  Matrix_copy.printMatrix();

  std::cout << "========================================" << std::endl;
  /* test add operator (+)
    */
  std::cout << "Test Add Operator" << std::endl;
  MyMatrix3<int> Matrix_sum_construct(Matrix_copy + Matrix_exp);
  MyMatrix3<int> Matrix_sum_assign(num_row, num_col);
  Matrix_sum_assign = Matrix_copy + Matrix_exp;
  // Matrix_sum = Matrix_exp + Matrix_copy;
  std::cout << "Matrix_sum_construct = " << std::endl;
  Matrix_sum_construct.printMatrix();
  std::cout << "Matrix_sum_assign = " << std::endl;
  Matrix_sum_assign.printMatrix();
  return 0;
}