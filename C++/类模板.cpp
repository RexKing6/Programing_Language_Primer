#include<iostream>
using namespace std;
template <class T>
class Stack
{
public:
    Stack(unsigned int size =100)
    {
        this->size=size;
        data=new T[size];
        sp=0;
    }
    ~Stack()
    {
        delete []data;//为毛这里是[]data......
    }
    void push (T value)
    {
        data[sp++]=value;
    }
    T pop()
    {
        return data[--sp];
    }
private:
    unsigned int size;
    unsigned int sp;
    T *data;
};
int main()
{
    Stack<int> intStack(100);
    intStack.push(1);
    intStack.push(2);
    intStack.push(3);
    cout<<intStack.pop()<<endl;
    cout<<intStack.pop()<<endl;
    cout<<intStack.pop()<<endl;
    return 0;
}
