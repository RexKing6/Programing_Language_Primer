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
    cout<<"���뼦�߹�����..."<<endl;
}
Baseclass::~Baseclass()
{
    cout<<"���뼦��������..."<<endl;
}
void Baseclass::dowhat(void)
{
    cout<<"��ʲô..."<<endl;
}
Subclass::Subclass()
{
    cout<<"�������๹����"<<endl;
}
Subclass::~Subclass()
{
    cout<<"��������������"<<endl;
}
int main()
{
    Subclass sub;
    sub.dowhat();
    cout<<"doing..."<<endl;
    return 0;
}
