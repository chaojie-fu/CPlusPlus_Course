# include "MyMatrix3.h"

/*
  Set default matrix size as 3x3.
  */
template <class T> 
MyMatrix3<T>::MyMatrix3()
{
  num_cols = 3;
  num_rows = 3;
  matrix = new T*[num_cols];
  for (size_t num_col= 0; num_col < num_cols; num_col++)
  {
    matrix[num_col] = new T[num_rows];
  }
  setZeros();
};

template <class T> 
MyMatrix3<T>::MyMatrix3(size_t f_num_rows, size_t f_num_cols)
{
  num_cols = f_num_cols;
  num_rows = f_num_rows;
  matrix = new T*[num_cols];
  for (size_t num_col= 0; num_col < num_cols; num_col++)
  {
    matrix[num_col] = new T[num_rows];
  }
  setZeros();
};

template <class T>
MyMatrix3<T>::MyMatrix3(MyMatrix3 & oldMatrix)
{
  num_cols = oldMatrix.getNumCols();
  num_rows = oldMatrix.getNumRows();

  matrix = new T*[num_cols];
  for (size_t num_col= 0; num_col < num_cols; num_col++)
  {
    matrix[num_col] = new T[num_rows];
  }

  /* deep-copy value of the old matrix
    */
  for (size_t num_col = 0; num_col < num_cols; num_col ++)
  {
    for (size_t num_row = 0; num_row < num_rows; num_row ++)
    {
      matrix[num_col][num_row] = oldMatrix.getValue(num_row, num_col);
    }
  }
}

template <class T> 
MyMatrix3<T>::~MyMatrix3(void)
{
  for (size_t num_col = 0; num_col < num_cols; num_col++)
  {
    delete[] matrix[num_col];
  }
  delete[] matrix;
};

template <class T>
MyMatrix3<T> & MyMatrix3<T>::operator=(MyMatrix3<T> & Matrix)
{
  /* raise error if the sizes of the two matrices not match.
    */
  if ((this->num_cols != Matrix.getNumCols()) || (this->num_rows != Matrix.getNumRows()))
  {
    std::cout << "ERROR: SIZE OF THE TWO MATRICES NOT MATCH!" << std::endl;
    exit(-1);
  }

  this->num_cols = Matrix.getNumCols();
  this->num_rows = Matrix.getNumRows();
  this->matrix = new T*[this->num_cols];
  for (size_t num_col= 0; num_col < this->num_cols; num_col ++)
  {
    this->matrix[num_col] = new T[num_rows];
  }

  for (size_t num_col = 0; num_col < this->num_cols; num_col ++)
  {
    for (size_t num_row = 0; num_row< this->num_rows; num_row ++)
    {
      this->matrix[num_col][num_row] = Matrix.getValue(num_row, num_col);
    }
  }
  return *this;
};

template <class T>
MyMatrix3<T> & MyMatrix3<T>::operator+(MyMatrix3<T> & Matrix)
{
  /* raise error if the sizes of the two matrices not match.
    */
  if ((this->num_cols != Matrix.getNumCols()) || (this->num_rows != Matrix.getNumRows()))
  {
    std::cout << "ERROR: SIZE OF THE TWO MATRICES NOT MATCH!" << std::endl;
    exit(-1);
  }

  /* solve the return problem for classes using pointers, but not delicate enough.
    */
  static MyMatrix3<T> Matrix_return(this->getNumRows(), this->getNumCols());
  Matrix_return.setZeros();
  for (size_t num_col = 0; num_col < this->num_cols; num_col ++)
  {
    for (size_t num_row = 0; num_row< this->num_rows; num_row ++)
    {
      Matrix_return.setValue(num_row, num_col, this->getValue(num_row, num_col) + Matrix.getValue(num_row, num_col));
    }
  }
  return Matrix_return;
}

template <class T>
MyMatrix3<T> & MyMatrix3<T>::operator*(MyMatrix3<T> & Matrix)
{
  /* raise error if the sizes of the two matrices not match.
    */
  if (this->num_cols != Matrix.getNumRows())
  {
    std::cout << "ERROR: COLUMN NUMBER OF THE FIRST MATRIX SHOULD MATCH THE ROW NUMBER OF THE SECOND MATRIX!" << std::endl;
    exit(-2);
  }

  /* solve the return problem for classes using pointers, but not delicate enough.
     according to the compiler, for each `Matrix_return` variable with different `num_rows` or `num_cols`, it will generate a new object.
    */
  static MyMatrix3<T> Matrix_return(this->num_rows, Matrix.getNumCols());
  Matrix_return.setZeros();
  for (size_t num_row = 0; num_row < this->num_rows; num_row ++)
  {
    for (size_t num_col = 0; num_col < Matrix.getNumCols(); num_col ++)
    {
      T sum = 0;
      for (size_t iter = 0; iter < this->num_cols; iter ++)
      {
        sum = sum + this->getValue(num_row, iter) * Matrix.getValue(iter, num_col);
      }
      Matrix_return.setValue(num_row, num_col, sum);
    }
  }
  return Matrix_return;
}

template <class T>
T MyMatrix3<T>::operator()(size_t row, size_t col)
{
  return this->getValue(row, col);
}

template <class T> 
size_t MyMatrix3<T>::getNumCols()
{
  return num_cols;
};

template <class T> 
size_t MyMatrix3<T>::getNumRows()
{
  return num_rows;
};

template <class T> 
void MyMatrix3<T>::setZeros()
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
T MyMatrix3<T>::getValue(size_t row, size_t col)
{
  return matrix[col][row];
};

template <class T> 
void MyMatrix3<T>::setValue(size_t row, size_t col, T new_value)
{
  matrix[col][row] = new_value;
};

template <class T>
void MyMatrix3<T>::printMatrix()
{
  std::cout << std::endl;
  for (size_t row = 0; row < num_rows; row ++)
  {
    std::cout <<"\t";
    for (size_t col = 0; col < num_cols; col ++)
    {
      std::cout << matrix[col][row] << "\t";
    }
    std::cout << std::endl;
  }
  std::cout << std::endl;
};

/*
  Add the following lines to avoid 'underfined references'
  Meanwhile, this can restrict the template class type to specific types
  */
template class MyMatrix3<int>;
template class MyMatrix3<float>;
template class MyMatrix3<double>;