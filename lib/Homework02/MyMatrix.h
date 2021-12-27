#include <iostream>
template <class T>
class MyMatrix
{
private:
  T **matrix;
  size_t num_cols;
  size_t num_rows;

public:
  MyMatrix();
  MyMatrix(size_t f_num_rows, size_t f_num_cols);
  MyMatrix(MyMatrix &);
  ~MyMatrix();
  size_t getNumCols();
  size_t getNumRows();
  void setZeros();
  T getValue(size_t row, size_t col);
  void setValue(size_t row, size_t col, T new_value);
  void printMatrix();
};