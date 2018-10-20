#include<iostream>
using namespace std;
class Animal
{
public:
    void eat(void);
protected:
    void sleep(void);
private:
    void run(void);
};
class Dog:public Animal
{

};
void Animal::eat(void)
{
    cout<<"eating..."<<endl;
}
void Animal::sleep(void)
{
    cout<<"sleeping..."<<endl;
}
void Animal::run(void)
{
    cout<<"running..."<<endl;
}
int main()
{
    Dog dog;
    dog.sleep();
    dog.run();
    dog.eat();
    return 0;
}
