# include <iostream>
# include "MyMatrix.h"

int main()
{
  MyMatrix<int> Matrix_exp(10, 20);

  /* test basic functions
    */
  std::cout << "Number of Columns: " << Matrix_exp.getNumCols() << std::endl;
  std::cout << "Number of Rows: " << Matrix_exp.getNumRows() << std::endl;
  Matrix_exp.setZeros();
  Matrix_exp.setValue(1, 2, 10.0);
  Matrix_exp.printMatrix();
  std::cout << "Element at (6, 11): " << Matrix_exp.getValue(5, 10) << std::endl;
  std::cout << "Element at (2, 3): " << Matrix_exp.getValue(1, 2) << std::endl;

  /* test copy constructor
    */
  MyMatrix<int> Matrix_copy = Matrix_exp;
  Matrix_copy.printMatrix();

  return 0;
}
