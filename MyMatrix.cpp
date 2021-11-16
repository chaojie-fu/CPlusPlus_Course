# include "MyMatrix.h"

// set default matrix size as 3x3.
MyMatrix::MyMatrix()
{
  num_cols = 3;
  num_rows = 3;
  matrix = new double*[num_cols];
  for (size_t num_col= 0; num_col < num_cols; num_col++)
  {
    matrix[num_col] = new double[num_rows];
  }
}

MyMatrix::MyMatrix(size_t f_num_cols, size_t f_num_rows)
{
  num_cols = f_num_cols;
  num_rows = f_num_rows;
  matrix = new double*[num_cols];
  for (size_t num_col= 0; num_col < num_cols; num_col++)
  {
    matrix[num_col] = new double[num_rows];
  }
}

MyMatrix::~MyMatrix(void)
{
  for (size_t num_col = 0; num_col < num_cols; num_col++)
  {
    delete[] matrix[num_col];
  }
  delete[] matrix;
}

size_t MyMatrix::getNumCols()
{
  return num_cols;
}

size_t MyMatrix::getNumRows()
{
  return num_rows;
}

void MyMatrix::setZeros()
{
  for (size_t num_col = 0; num_col < num_cols; num_col++)
  {
    for (size_t num_row = 0; num_row < num_rows; num_row++)
    {
      matrix[num_col][num_row] = 0;
    }
  }
}

double MyMatrix::getValue(size_t col, size_t row)
{
  return matrix[col][row];
}

void MyMatrix::setValue(size_t col, size_t row, double new_value)
{
  matrix[col][row] = new_value;
}