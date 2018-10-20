#include<iostream>
using namespace std;
class Baseclass
{
public:
    Baseclass();
    ~Baseclass();
    void dowhat(void);
};
class Subclass:public Baseclass
{
public:
    Subclass();
    ~Subclass();
};
Baseclass::Baseclass()
{
    cout<<"进入鸡肋构造器..."<<endl;
}
Baseclass::~Baseclass()
{
    cout<<"进入鸡肋析构器..."<<endl;
}
void Baseclass::dowhat(void)
{
    cout<<"干什么..."<<endl;
}
Subclass::Subclass()
{
    cout<<"进入子类构造器"<<endl;
}
Subclass::~Subclass()
{
    cout<<"进入子类析构器"<<endl;
}
int main()
{
    Subclass sub;
    sub.dowhat();
    cout<<"doing..."<<endl;
    return 0;
}
