#include<iostream>
using namespace std;
class Pet
{
public:
    int mouth;
    virtual void eat(void)=0;
    virtual void run(void)//�鷽��:���û��virtual�������run��ִ�л�����ķ�������������ģ����鷽�������"=0"��ʹ����Ϊ���󷽷������������ȫΪ���麯������new�ᱨ��:"X:\���ĳ���\new���鷽��.cpp|31|error: cannot allocate an object of abstract type 'Dog'|"
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
}//���⣬������ȫ�����鷽��
