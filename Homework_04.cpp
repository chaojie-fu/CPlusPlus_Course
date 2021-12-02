# include <iostream>
# include "MyMatrix3.h"

int main()
{
  MyMatrix3<int> Matrix01(10, 5);
  Matrix01.setValue(2, 1, 10.0);
  MyMatrix3<int> Matrix02(10, 5);
  for (size_t row = 0; row < Matrix02.getNumRows(); row ++)
  {
      for (size_t col = 0; col < Matrix02.getNumCols(); col ++)
      {
          Matrix02.setValue(row, col, (row + 1) * 1 + (col + 1) * 2);
      }
  }
  MyMatrix3<int> Matrix03(5, 3);
  Matrix03.setValue(0, 0, 1.0);
  Matrix03.setValue(0, 1, 1.0);
  Matrix03.setValue(0, 2, 1.0);
  Matrix03.setValue(3, 1, 1.0);
  Matrix03.setValue(4, 2, 1.0);
  Matrix03.setValue(2, 2, 1.0);

  try
  {
      Matrix01 = Matrix03;
  }
  catch (std::exception & e)
  {
      std::cout << e.what() << std::endl;
  }

  try
  {
      (Matrix01 * Matrix02).printMatrix();
  }
  catch (std::exception & e)
  {
      std::cout << e.what() << std::endl;
  }

  try
  {
      std::cout << "Matrix02 = " << std::endl;
      Matrix02.printMatrix();
      std::cout << "Matrix03 = " << std::endl;
      Matrix03.printMatrix();
      std::cout << "Matrix02 * Matrix03 = " << std::endl;
      (Matrix02 * Matrix03).printMatrix();
  }
  catch (std::exception & e)
  {
      std::cout << e.what() << std::endl;
  }

  return 0;
}