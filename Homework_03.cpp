# include <iostream>
# include "MyMatrix3.h"

int main()
{
  MyMatrix3<int> Matrix_exp(10, 20);

  /* test basic functions
    */
  std::cout << "Number of Columns: " << Matrix_exp.getNumCols() << std::endl;
  std::cout << "Number of Rows: " << Matrix_exp.getNumRows() << std::endl;
  Matrix_exp.setZeros();
  Matrix_exp.setValue(2, 1, 10.0);
  Matrix_exp.printMatrix();
  std::cout << "Element at (11, 6): " << Matrix_exp.getValue(10, 5) << std::endl;
  std::cout << "Element at (3, 2): " << Matrix_exp.getValue(2, 1) << std::endl;

  /* test copy constructor
    */
  MyMatrix3<int> Matrix_copy = Matrix_exp;
  Matrix_copy.printMatrix();

//   MyMatrix3<int> Matrix_sum();
//   Matrix_sum.printMatrix();
  MyMatrix3<int> Matrix_sum(10, 20);
  Matrix_sum = Matrix_copy + Matrix_exp;
  return 0;
}