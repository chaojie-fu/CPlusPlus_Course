#include <iostream>
#include <cstring>

// This method requires two parameters, one pointer and one int.
// array will decay to pointer when using this method, losing the length information
template <class T>
void MySort1(T *array, int arrayLength)
{
  T maxValue = array[0];
  T minValue = array[0];
  for (int item = 1; item < arrayLength; item++)
  {
    if (array[item] > maxValue)
    {
      maxValue = array[item];
    }
    if (array[item] < minValue)
    {
      minValue = array[item];
    }
  }
  std::cout << "Max: " << maxValue << std::endl;
  std::cout << "Min: " << minValue << std::endl;
}

// This method requires only the array as input, which is used as a reference.
template <class T, int N>
void MySort2(T (&array)[N])
{
  T maxValue = array[0];
  T minValue = array[0];
  for (int item = 1; item < N; item++)
  {
    if (array[item] > maxValue)
    {
      maxValue = array[item];
    }
    if (array[item] < minValue)
    {
      minValue = array[item];
    }
  }
  std::cout << "Max: " << maxValue << std::endl;
  std::cout << "Min: " << minValue << std::endl;
}

// This method requires only the array as input, which is used as a reference.
template <int N>
void MySort2(const char *(&array)[N])
{
  const char *maxValue = array[0];
  const char *minValue = array[0];
  for (int item = 1; item < N; item++)
  {
    if (std::strcmp(array[item], maxValue) > 0)
    {
      maxValue = array[item];
    }
    if (std::strcmp(array[item], minValue) < 0)
    {
      minValue = array[item];
    }
  }
  std::cout << "Max: " << maxValue << std::endl;
  std::cout << "Min: " << minValue << std::endl;
}

int main()
{
  const int length = 10;

  std::cout << "===== int type array =====" << std::endl;
  int int_array[length];
  for (int i = 0; i < length; i++)
  {
    int_array[i] = i * 2;
  }
  // MySort1(int_array, length);
  // MySort2<int, length>(int_array);
  MySort2(int_array);

  std::cout << "===== float type array =====" << std::endl;
  float float_array[length];
  for (int i = 0; i < length; i++)
  {
    float_array[i] = i * i * 1.01;
  }
  MySort2(float_array);

  std::cout << "===== char type array =====" << std::endl;
  char char_array[length]{'a', '0', 'c', 'y', 'e', 'k', 'g', 'h', 'i', 'z'};
  MySort2(char_array);

  std::cout << "===== string type array =====" << std::endl;
  const char *string_array[length]{"01", "00", "0a", "yiac", "e", "k", "g", "h", "i", "z"};
  MySort2(string_array);
}
