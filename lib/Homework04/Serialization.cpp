/*
    reference of this file:
    - How to read csv files: https://www.gormanalysis.com/blog/reading-and-writing-csv-files-with-cpp/
    */
# include <fstream>
# include <sstream>
# include <vector>
# include "Serialization.h"

template <class T>
void Serialization<T>::serialize(MyMatrix4<T> &  Matrix, std::string & name)
{
    std::ofstream outFile(name);

    if (!outFile.is_open())
    {
        throw std::runtime_error("Unable to open file.");
        return;
    }
    else
    {
        for (size_t row = 0; row < Matrix.getNumRows(); row ++)
        {
            for (size_t col = 0; col < Matrix.getNumCols(); col ++)
            {
                outFile << Matrix.getValue(row, col) << ",";
            }
            outFile << std::endl;
        }
        outFile.close();
    }
}

template <class T>
MyMatrix4<T> Serialization<T>::deserialize(std::string & name)
{
    std::ifstream inFile(name);
    std::vector<T> values;
    T value;

    if (!inFile.is_open())
    {
        throw std::runtime_error("File not found.");
        exit(-2);
    }
    else
    {
        std::string line, item; // variable to store one line.
        size_t rows = 1;
        size_t cols = 0;
        size_t pre_cols = 0;

        while (std::getline(inFile, line))
        {
            std::stringstream ss(line); //create a string stream from line.

            # ifdef DEBUG
                std::cout << line << std::endl;
                std::cout << "pre_cols: " << pre_cols << std::endl;
                std::cout << "cols: " << cols << std::endl;
                std::cout << "rows: " << rows << std::endl;
            # endif
            /*
                check data files by checking if the data number of the rows are the same.
                */
            if ((pre_cols != cols) && (rows > 2))
            {
                throw std::runtime_error("Column numbers not consistent between the rows. Please check data file.");
            }

            pre_cols = cols;
            cols = 0;

            while (ss >> value)
            {
                # ifdef DEBUG
                    std::cout << value << std::endl;
                # endif
                values.push_back(value);
                if (ss.peek() == ',')
                {
                    ss.ignore();
                }
                cols ++;
            }
            rows ++;
        }
        inFile.close();

        MyMatrix4<T> Matrix_out(rows, cols);

        for (size_t row = 0; row < rows; row ++)
        {
            for (size_t col = 0; col < cols; col ++)
            {
                Matrix_out.setValue(row, col, values[row * cols + col]);
            }
        }
        return Matrix_out;
    }
}

template void Serialization<int>::serialize(MyMatrix4<int> &  Matrix, std::string &  name);
template void Serialization<long int>::serialize(MyMatrix4<long int> &  Matrix, std::string &  name);
template void Serialization<short int>::serialize(MyMatrix4<short int> &  Matrix, std::string &  name);
template void Serialization<long long int>::serialize(MyMatrix4<long long int> &  Matrix, std::string &  name);
template void Serialization<float>::serialize(MyMatrix4<float> &  Matrix, std::string &  name);
template void Serialization<double >::serialize(MyMatrix4<double> &  Matrix, std::string &  name);
template void Serialization<long double>::serialize(MyMatrix4<long double> &  Matrix, std::string &  name);

template MyMatrix4<int> Serialization<int>::deserialize(std::string &  name);
template MyMatrix4<long int> Serialization<long int>::deserialize(std::string &  name);
template MyMatrix4<short int> Serialization<short int>::deserialize(std::string &  name);
template MyMatrix4<long long int> Serialization<long long int>::deserialize(std::string &  name);
template MyMatrix4<float> Serialization<float>::deserialize(std::string &  name);
template MyMatrix4<double> Serialization<double >::deserialize(std::string &  name);
template MyMatrix4<long double> Serialization<long double>::deserialize(std::string &  name);