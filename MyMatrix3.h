# include <iostream>
template <class T>
class MyMatrix3
{
  private:
    T ** matrix;
    size_t num_cols;
    size_t num_rows;
  public:
    MyMatrix3();
    MyMatrix3(size_t f_num_cols, size_t f_num_rows);
    MyMatrix3(MyMatrix3 &);
    ~MyMatrix3();
    size_t getNumCols();
    size_t getNumRows();
    void setZeros();
    T getValue(size_t row, size_t col);
    void setValue(size_t col, size_t row, T new_value);
    void printMatrix();
};