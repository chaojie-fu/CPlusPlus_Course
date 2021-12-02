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
    MyMatrix3(MyMatrix3 && oldMatrix);
    ~MyMatrix3();

    /* overload operators
      */
    MyMatrix3 operator=(MyMatrix3 & Matrix);
    MyMatrix3 operator=(MyMatrix3 && Matrix);
    MyMatrix3 operator+(MyMatrix3 & Matrix);
    MyMatrix3 operator*(MyMatrix3 & Matrix);
    T operator()(size_t row, size_t col);
    template <class U>
    friend std::istream & operator>>(std::istream & input, MyMatrix3<U> & Matrix);
    template <class U>
    friend std::ostream & operator<<(std::ostream & output, MyMatrix3<U> & Matrix);

    size_t getNumCols();
    size_t getNumRows();
    void setZeros();
    T getValue(size_t row, size_t col);
    void setValue(size_t row, size_t col, T new_value);
    void printMatrix();
};

template <class U>
std::istream & operator>>(std::istream & input, MyMatrix3<U> & Matrix)
{
  std::cout << "Input data as commanded. The matrix size is " << Matrix.getNumRows() << " * " << Matrix.getNumCols() << std::endl;
  for (size_t row = 0; row < Matrix.getNumRows(); row ++)
  {
    for (size_t col = 0; col < Matrix.getNumCols(); col ++)
    {
      U input_var;
      std::cout << "Element(" << row + 1 << ", " << col + 1 << "): ";
      input >> input_var;
      Matrix.setValue(row, col, input_var);
    }
  }
  return input;
};

template <class U>
std::ostream & operator<<(std::ostream & output, MyMatrix3<U> & Matrix)
{
  output << std::endl;
  for (size_t row = 0; row < Matrix.getNumRows(); row ++)
  {
    for (size_t col = 0; col < Matrix.getNumCols(); col ++)
    {
      output.width(8);
      output << Matrix.getValue(row, col) << "\t";      
    }
    output << std::endl;
  }
  output << std::endl;
  return output;
};