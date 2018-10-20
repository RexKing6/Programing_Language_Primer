#include<iostream>
using namespace std;
class Dog
{
public:
    string name;
    Dog(string name);
};
Dog::Dog(string name)
{
    this->name=name;//左边是属性。右边是参数。用来让编译器识别。如果没有重名则不需要使用
}
