/*
  Some references of this file:
  - most useful for the question `return a pointer from function`: https://stackoverflow.com/questions/12992925/c-correct-way-to-return-pointer-to-array-from-function
  - about the lvalue_reference and rvalue rvalue_reference: https://www.geeksforgeeks.org/lvalues-references-and-rvalues-references-in-c-with-examples/
  - example of the use of move constructor in matrix class: https://hypercube.top/posts/2017/12/30/double-arr.html
  */
# include "MyMatrix4.h"

/*
  Set default matrix size as 3x3.
  */
template <class T> 
MyMatrix4<T>::MyMatrix4()
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

/* 
  Basic Constructor
  */
template <class T> 
MyMatrix4<T>::MyMatrix4(size_t f_num_rows, size_t f_num_cols)
{
  #ifdef DEBUG
    std::cout << "Basic Constructor" << std::endl;
  #endif
  num_cols = f_num_cols;
  num_rows = f_num_rows;
  matrix = new T*[num_cols];
  for (size_t num_col= 0; num_col < num_cols; num_col++)
  {
    matrix[num_col] = new T[num_rows];
  }
  setZeros();
};

/* 
  Copy Constructor
  */
template <class T>
MyMatrix4<T>::MyMatrix4(MyMatrix4<T> & oldMatrix)
{
  #ifdef DEBUG
    std::cout << "Copy Constructor" << std::endl;
  #endif
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

/*
  Move Constructor
  */
template <class T>
MyMatrix4<T>::MyMatrix4(MyMatrix4<T> && oldMatrix)
{
  #ifdef DEBUG
    std::cout << "Move Constructor" << std::endl;
  #endif
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

/*
  Deconstructor
  */
template <class T> 
MyMatrix4<T>::~MyMatrix4(void)
{
  #ifdef DEBUG
    std::cout << "Deconstructor" << std::endl;
  #endif
  for (size_t num_col = 0; num_col < num_cols; num_col++)
  {
    delete[] matrix[num_col];
  }
  delete[] matrix;
};

/* 
  Copy assignment
  */
template <class T>
MyMatrix4<T> MyMatrix4<T>::operator=(MyMatrix4<T> & Matrix)
{
  #ifdef DEBUG
    std::cout << "Copy Assignment" << std::endl;
  #endif
  /* raise error if the sizes of the two matrices not match.
    */
  if ((this->num_cols != Matrix.getNumCols()) || (this->num_rows != Matrix.getNumRows()))
  {
    throw std::domain_error("ERROR: Sizes of the two matrices not match!");
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

/*
  Move assignment
  */
template <class T>
MyMatrix4<T> MyMatrix4<T>::operator=(MyMatrix4<T> && Matrix)
{
  #ifdef DEBUG
    std::cout << "Move Assignment" << std::endl;
  #endif
  /* raise error if the sizes of the two matrices not match.
    */
  if ((this->num_cols != Matrix.getNumCols()) || (this->num_rows != Matrix.getNumRows()))
  {
    throw std::domain_error("ERROR: Sizes of the two matrices not match!");
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
MyMatrix4<T> MyMatrix4<T>::operator+(MyMatrix4<T> & Matrix)
{
  /* raise error if the sizes of the two matrices not match.
    */
  if ((this->num_cols != Matrix.getNumCols()) || (this->num_rows != Matrix.getNumRows()))
  {
    throw std::domain_error("ERROR: Sizes of the two matrices not match!");
  }

  MyMatrix4<T> Matrix_return(this->getNumRows(), this->getNumCols());
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
MyMatrix4<T> MyMatrix4<T>::operator*(MyMatrix4<T> & Matrix)
{
  /* raise error if the sizes of the two matrices not match.
    */
  if (this->num_cols != Matrix.getNumRows())
  {
    throw std::domain_error("ERROR: Column number of the first matrix do not match the row number of the second matrix!");
  }

  MyMatrix4<T> Matrix_return(this->num_rows, Matrix.getNumCols());
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
T MyMatrix4<T>::operator()(size_t row, size_t col)
{
  return this->getValue(row, col);
}

template <class T> 
size_t MyMatrix4<T>::getNumCols()
{
  return num_cols;
};

template <class T> 
size_t MyMatrix4<T>::getNumRows()
{
  return num_rows;
};

template <class T> 
void MyMatrix4<T>::setZeros()
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
T MyMatrix4<T>::getValue(size_t row, size_t col)
{
  return matrix[col][row];
};

template <class T> 
void MyMatrix4<T>::setValue(size_t row, size_t col, T new_value)
{
  matrix[col][row] = new_value;
};

template <class T>
void MyMatrix4<T>::printMatrix()
{
  std::cout << std::endl;
  for (size_t row = 0; row < num_rows; row ++)
  {
    for (size_t col = 0; col < num_cols; col ++)
    {
      std::cout.width(8);
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
template class MyMatrix4<int>;
template class MyMatrix4<long int>;
template class MyMatrix4<short int>;
template class MyMatrix4<long long int>;
template class MyMatrix4<float>;
template class MyMatrix4<double>;
template class MyMatrix4<long double>;