#include<iostream>
using namespace std;
class Animal
{
public:
    void eat();
    void sleep();
};
class Plant
{
public:
    void stand()
    {
        cout<<"standing..."<<endl;
    }
};
class Treeman:public Animal,public Plant//��̳�
{
public:
    void roll()
    {
        cout<<"roll..."<<endl;
    }
};
class Pig:public Animal
{
public:
    void climb();
};
class Dog:public Animal
{
public:
    void bark();
};
void Animal::eat()
{
    cout<<"eating..."<<endl;
}
void Animal::sleep()
{
    cout<<"sleeping..."<<endl;
}
void Pig::climb()
{
    cout<<"climbing..."<<endl;
}
void Dog::bark()
{
    cout<<"barking..."<<endl;
}
/*void Pig::eat()//������Ը���ķ����������¶��壬�ǲ�����ģ�������̳и���󣬲��������ظ�������ķ���
{
    cout<<"fucking"<<endl;
}*/
int main()
{
    Pig pig;
    Dog dog;
    pig.eat();
    pig.climb();
    dog.sleep();
    dog.bark();
    Treeman t;
    t.eat();
    t.roll();
    t.stand();
    return 0;
}
