# include <iostream>
# include "MyMatrix.h"

int main()
{
  MyMatrix<int> Matrix_exp(10, 20);
  std::cout << "Number of Columns: " << Matrix_exp.getNumCols() << std::endl;
  std::cout << "Number of Rows: " << Matrix_exp.getNumRows() << std::endl;
  Matrix_exp.setZeros();
  Matrix_exp.setValue(1, 2, 10.0);
  std::cout << Matrix_exp.getValue(5, 10) << std::endl;
  std::cout << Matrix_exp.getValue(1, 2) << std::endl;

  return 0;
}
