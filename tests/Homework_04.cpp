#include <iostream>
#include "MyMatrix4.h"
#include "Serialization.h"

int main()
{
  MyMatrix4<int> Matrix01(10, 5);
  Matrix01.setValue(2, 1, 10.0);
  MyMatrix4<int> Matrix02(10, 5);
  for (size_t row = 0; row < Matrix02.getNumRows(); row++)
  {
    for (size_t col = 0; col < Matrix02.getNumCols(); col++)
    {
      Matrix02.setValue(row, col, (row + 1) * 1 + (col + 1) * 2);
    }
  }
  MyMatrix4<int> Matrix03(5, 3);
  Matrix03.setValue(0, 0, 1.0);
  Matrix03.setValue(0, 1, 1.0);
  Matrix03.setValue(0, 2, 1.0);
  Matrix03.setValue(3, 1, 1.0);
  Matrix03.setValue(4, 2, 1.0);
  Matrix03.setValue(2, 2, 1.0);

  /* 
        test file IO functions
        */
  std::cout << "========================================" << std::endl;
  std::cout << "Test file IO functions, Matrix04 is generated from file." << std::endl;
  Serialization<int> Serializer;
  std::string file_name = "./output.csv";
  Serializer.serialize(Matrix03, file_name);

  MyMatrix4<int> Matrix04 = Serializer.deserialize(file_name);
  std::cout << "Matrix04 = " << std::endl;
  Matrix04.printMatrix();
  std::cout << "========================================" << std::endl;

  /*
        test Exception handling
        */
  std::cout << "========================================" << std::endl;
  std::cout << "Test matrix assignment with different shape." << std::endl;
  try
  {
    Matrix01 = Matrix03;
  }
  catch (std::exception &e)
  {
    std::cout << e.what() << std::endl;
  }

  std::cout << "========================================" << std::endl;
  std::cout << "Test matrix multiplication #01. (Inconsistent shape)" << std::endl;
  try
  {
    (Matrix01 * Matrix02).printMatrix();
  }
  catch (std::exception &e)
  {
    std::cout << e.what() << std::endl;
  }
  std::cout << "========================================" << std::endl;

  std::cout << "========================================" << std::endl;
  std::cout << "Test matrix multiplication #02. (Consistant shape" << std::endl;
  try
  {
    std::cout << "Matrix02 = " << std::endl;
    Matrix02.printMatrix();
    std::cout << "Matrix03 = " << std::endl;
    Matrix03.printMatrix();
    std::cout << "Matrix02 * Matrix03 = " << std::endl;
    (Matrix02 * Matrix03).printMatrix();
  }
  catch (std::exception &e)
  {
    std::cout << e.what() << std::endl;
  }
  std::cout << "========================================" << std::endl;

  return 0;
}