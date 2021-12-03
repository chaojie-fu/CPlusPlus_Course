# include "MyMatrix4.h"

template <class T>
class Serialization
{
    public:
        void serialize(MyMatrix4<T> & Matrix, std::string & name);
        MyMatrix4<T> deserialize(std::string & name);
};