# include "MyMatrix4.h"

template <class T>
class Serialization
{
    private:
        ; 
    public:
        void serialize(MyMatrix4<T> & Matrix, std::string & name);
        // template <class T>
        // MyMatrix4<T> deserialize(MyMatrix4<T> & Matrix, FileName name);
        MyMatrix4<T> deserialize(std::string & name);
};