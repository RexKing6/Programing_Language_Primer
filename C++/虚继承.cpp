#include<iostream>
using namespace std;
class Thing
{
public:
    void make()
    {
        cout<<"making..."<<endl;
    }
};
class Animal:virtual public Thing
{
public:
    void eat()
    {
        cout<<"eating..."<<endl;
    }
};
class Plant:virtual public Thing
{
public:
    void stand()
    {
        cout<<"standing..."<<endl;
    }
};
class Treeman:public Animal,public Plant
{
public:
    void roll()
    {
        cout<<"rolling..."<<endl;
    }
};
int main()
{
    Treeman t;
    t.roll();
    t.make();
    return 0;
}//虚继承，在这里我认为是为了继承爷类（请允许我这样称呼）的方法。
