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
}//��̳У�����������Ϊ��Ϊ�˼̳�ү�ࣨ�������������ƺ����ķ�����
