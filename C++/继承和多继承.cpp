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
class Treeman:public Animal,public Plant//多继承
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
/*void Pig::eat()//在子类对父类的方法进行重新定义，是不允许的，在子类继承父类后，并不能重载父类里面的方法
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
