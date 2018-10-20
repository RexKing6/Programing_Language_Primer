#include<iostream>
template <class T>//template <typename T>
void swap(T a,T b)
{
    T tmp=a;
    a=b;
    b=tmp;
}
int main()
{
    return 0;
}
