# include <iostream>
template <class T>
class MyMatrix
{
  private:
    T ** matrix;
    size_t num_cols;
    size_t num_rows;
  public:
    MyMatrix();
    MyMatrix(size_t f_num_cols, size_t f_num_rows);
    ~MyMatrix();
    size_t getNumCols();
    size_t getNumRows();
    void setZeros();
    T getValue(size_t col, size_t row);
    void setValue(size_t col, size_t row, T new_value);
};