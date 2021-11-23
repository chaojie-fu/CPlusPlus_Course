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
    MyMatrix3(MyMatrix3 & oldMatrix);
    ~MyMatrix3();
    size_t getNumCols();
    size_t getNumRows();
    void setZeros();
    T getValue(size_t row, size_t col);
    void setValue(size_t row, size_t col, T new_value);
    void printMatrix();

    /* overload operators
      */
    template <class U>
    friend MyMatrix3<U> operator+(MyMatrix3<U> & Matrix1, MyMatrix3<U> & Matrix2);
};

template <class T>
MyMatrix3<T> operator+(MyMatrix3<T> & Matrix1, MyMatrix3<T> & Matrix2)
{
    if ((Matrix1.getNumCols() != Matrix2.getNumCols()) || (Matrix1.getNumRows() != Matrix2.getNumRows()))
    {
        std::cout << "ERROR: SIZES OF THE TWO MATRICES NOT MATCH" << std::endl;
        exit(-1);
    }
    else
    {
        size_t num_cols = Matrix1.getNumCols();
        size_t num_rows = Matrix1.getNumRows();
        MyMatrix3<T> MatrixSum(num_cols, num_rows);
        for (size_t num_col = 0; num_col < num_cols; num_col ++)
        {
            for (size_t num_row = 0; num_row < num_rows; num_row ++)
            {
                MatrixSum.setValue(num_row, num_col, Matrix1.getValue(num_row, num_col) + Matrix2.getValue(num_row, num_col));
            }
        }
        return MatrixSum;
    }
}