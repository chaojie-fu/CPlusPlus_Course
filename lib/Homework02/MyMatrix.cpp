#include "MyMatrix.h"

/*
  Set default matrix size as 3x3.
  */
template <class T>
MyMatrix<T>::MyMatrix()
{
  num_cols = 3;
  num_rows = 3;
  matrix = new T *[num_cols];
  for (size_t num_col = 0; num_col < num_cols; num_col++)
  {
    matrix[num_col] = new T[num_rows];
  }
  setZeros();
};

template <class T>
MyMatrix<T>::MyMatrix(size_t f_num_rows, size_t f_num_cols)
{
  num_cols = f_num_cols;
  num_rows = f_num_rows;
  matrix = new T *[num_cols];
  for (size_t num_col = 0; num_col < num_cols; num_col++)
  {
    matrix[num_col] = new T[num_rows];
  }
  setZeros();
};

template <class T>
MyMatrix<T>::MyMatrix(MyMatrix &oldMatrix)
{
  num_cols = oldMatrix.getNumCols();
  num_rows = oldMatrix.getNumRows();

  matrix = new T *[num_cols];
  for (size_t num_col = 0; num_col < num_cols; num_col++)
  {
    matrix[num_col] = new T[num_rows];
  }

  /* deep-copy value of the old matrix
    */
  for (size_t num_col = 0; num_col < num_cols; num_col++)
  {
    for (size_t num_row = 0; num_row < num_rows; num_row++)
    {
      matrix[num_col][num_row] = oldMatrix.getValue(num_row, num_col);
    }
  }
}

template <class T>
MyMatrix<T>::~MyMatrix(void)
{
  for (size_t num_col = 0; num_col < num_cols; num_col++)
  {
    delete[] matrix[num_col];
  }
  delete[] matrix;
};

template <class T>
size_t MyMatrix<T>::getNumCols()
{
  return num_cols;
};

template <class T>
size_t MyMatrix<T>::getNumRows()
{
  return num_rows;
};

template <class T>
void MyMatrix<T>::setZeros()
{
  for (size_t num_col = 0.0; num_col < num_cols; num_col++)
  {
    for (size_t num_row = 0.0; num_row < num_rows; num_row++)
    {
      matrix[num_col][num_row] = 0.0;
    }
  }
};

template <class T>
T MyMatrix<T>::getValue(size_t row, size_t col)
{
  return matrix[col][row];
};

template <class T>
void MyMatrix<T>::setValue(size_t row, size_t col, T new_value)
{
  matrix[col][row] = new_value;
};

template <class T>
void MyMatrix<T>::printMatrix()
{
  std::cout << "Printing Matrix:" << std::endl;
  for (size_t row = 0; row < num_rows; row++)
  {
    for (size_t col = 0; col < num_cols; col++)
    {
      std::cout << matrix[col][row] << "\t";
    }
    std::cout << std::endl;
  }
  std::cout << "Printed Matrix." << std::endl;
}

/*
  Add the following lines to avoid 'underfined references'
  Meanwhile, this can restrict the template class type to specific types
  */
template class MyMatrix<int>;
template class MyMatrix<float>;
template class MyMatrix<double>;