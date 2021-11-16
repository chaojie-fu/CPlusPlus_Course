# include <iostream>
class MyMatrix
{
  private:
    double ** matrix;
    size_t num_cols;
    size_t num_rows;
  public:
    MyMatrix();
    MyMatrix(size_t num_cols, size_t num_rows);
    ~MyMatrix();
    size_t getNumCols();
    size_t getNumRows();
    void setZeros();
    double getValue(size_t col, size_t row);
    void setValue(size_t col, size_t row, double new_value);
};