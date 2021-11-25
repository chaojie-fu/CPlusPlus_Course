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
    MyMatrix3(size_t f_num_rows, size_t f_num_cols);
    MyMatrix3(MyMatrix3 & oldMatrix);
    ~MyMatrix3();

    /* overload operators
      */
    MyMatrix3& operator=(MyMatrix3 & Matrix);
    MyMatrix3& operator+(MyMatrix3 & Matrix);
    MyMatrix3& operator*(MyMatrix3 & Matrix);

    size_t getNumCols();
    size_t getNumRows();
    void setZeros();
    T getValue(size_t row, size_t col);
    void setValue(size_t row, size_t col, T new_value);
    void printMatrix();
};