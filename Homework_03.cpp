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
  std::cout << "Matrix_sum_construct = " << std::endl;
  Matrix_sum_construct.printMatrix();
  std::cout << "Matrix_sum_assign = " << std::endl;
  Matrix_sum_assign.printMatrix();


  std::cout << "========================================" << std::endl;
  /* test multiple operator (*)
    */
  std::cout << "Test Multiple Operator" << std::endl;
  MyMatrix3<int> A(3, 2);
  for (size_t num_row = 0; num_row < 3; num_row ++)
  {
    for (size_t num_col = 0; num_col < 2; num_col ++)
    {
      A.setValue(num_row, num_col, 1);
    }
  }
  MyMatrix3<int> B(2, 4);
  for (size_t num_row = 0; num_row < 2; num_row ++)
  {
    for (size_t num_col = 0; num_col < 4; num_col ++)
    {
      B.setValue(num_row, num_col, num_row * 2 + num_col * 3);
    }
  }
  std::cout << "A = " << std::endl;
  A.printMatrix();
  std::cout << "B = " << std::endl;
  B.printMatrix();
  std::cout << "A * B = " << std::endl;
  MyMatrix3<int> C(3, 4);
  C = A * B;
  C.printMatrix();
  return 0;
}