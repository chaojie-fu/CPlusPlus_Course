# include <fstream>
# include <typeinfo>
# include "Serialization.h"

template <class T>
void Serialization<T>::serialize(MyMatrix4<T> &  Matrix, std::string & name)
{
    std::ofstream outFile(name);

    if (!outFile.is_open())
    {
        throw std::runtime_error("File not found.");
        return;
    }
    else
    {
        for (size_t row = 0; row < Matrix.getNumRows(); row ++)
        {
            for (size_t col = 0; col < Matrix.getNumCols(); col ++)
            {
                outFile << Matrix.getValue(row, col) << ", ";
            }
            outFile << std::endl;
        }
        outFile.close();
    }
}

template <class T>
MyMatrix4<T> deserialize(std::string & name)
{
    std::ifstream inFile(name);

    if (!inFile.is_open(name))
    {
        throw std::runtime_error("File not found.")
    }
}

template <class T>
MyMatrix4<T> Serialization<T>::deserialize(std::string & name)
{

}

template void Serialization<int>::serialize(MyMatrix4<int> &  Matrix, std::string &  name);
template void Serialization<long int>::serialize(MyMatrix4<long int> &  Matrix, std::string &  name);
template void Serialization<short int>::serialize(MyMatrix4<short int> &  Matrix, std::string &  name);
template void Serialization<long long int>::serialize(MyMatrix4<long long int> &  Matrix, std::string &  name);
template void Serialization<float>::serialize(MyMatrix4<float> &  Matrix, std::string &  name);
template void Serialization<double >::serialize(MyMatrix4<double> &  Matrix, std::string &  name);
template void Serialization<long double>::serialize(MyMatrix4<long double> &  Matrix, std::string &  name);