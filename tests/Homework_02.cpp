# include <iostream>
# include "MyMatrix.h"

int main()
{
  MyMatrix<int> Matrix_exp(20, 10);

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
  MyMatrix<int> Matrix_copy = Matrix_exp;
  Matrix_copy.printMatrix();

  return 0;
}
