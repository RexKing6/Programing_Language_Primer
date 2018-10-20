#include<iostream>
using namespace std;
class Pet
{
public:
    int mouth;
    virtual void eat(void)=0;
    virtual void run(void)//虚方法:如果没有virtual，下面的run将执行基类里的方法而不是子类的，在虚方法后面加"=0"，使它成为抽象方法，但父类如果全为纯虚函数，则new会报错:"X:\渣的程序\new和虚方法.cpp|31|error: cannot allocate an object of abstract type 'Dog'|"
    {
        cout<<"Pet runnning..."<<endl;
    }
};
class Dog:public Pet
{
public:
    void run(void)
    {
        cout<<"running..."<<endl;
    };
};
class Cat:public Pet
{
public:
    void roll(void)
    {
        cout<<"roll..."<<endl;
    };
};
int main()
{
    Pet *d=new Dog;
    d->eat();
    d->run();
    return 0;
}//另外，析构器全部是虚方法
