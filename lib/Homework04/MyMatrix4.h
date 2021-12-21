# include <iostream>

# ifndef MYMATRIX4
# define MYMATRIX4

template <class T>
class MyMatrix4
{
  private:
    T ** matrix;
    size_t num_cols;
    size_t num_rows;
  public:
    MyMatrix4();
    MyMatrix4(size_t f_num_rows, size_t f_num_cols);
    MyMatrix4(MyMatrix4 & oldMatrix);
    MyMatrix4(MyMatrix4 && oldMatrix);
    ~MyMatrix4();

    /* overload operators
      */
    MyMatrix4 operator=(MyMatrix4 & Matrix);
    MyMatrix4 operator=(MyMatrix4 && Matrix);
    MyMatrix4 operator+(MyMatrix4 & Matrix);
    MyMatrix4 operator*(MyMatrix4 & Matrix);
    T operator()(size_t row, size_t col);
    template <class U>
    friend std::istream & operator>>(std::istream & input, MyMatrix4<U> & Matrix);
    template <class U>
    friend std::ostream & operator<<(std::ostream & output, MyMatrix4<U> & Matrix);

    size_t getNumCols();
    size_t getNumRows();
    void setZeros();
    T getValue(size_t row, size_t col);
    void setValue(size_t row, size_t col, T new_value);
    void printMatrix();
};

# endif