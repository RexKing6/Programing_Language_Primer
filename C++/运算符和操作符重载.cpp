// . * :: sizeof ?:≤ª‘ –Ì÷ÿ‘ÿ
#include<iostream>
#include<cstdio>
using namespace std;
class AA
{
public:
    AA()
    {
        a=b=0;
    };
    AA(int a1,int b1)
    {
        a=a1;
        b=b1;
    };
    AA operator + (AA &x);
    AA operator - (AA &x);
    AA operator * (AA &x);
    AA operator / (AA &x);
    void easy();
    void print();
    friend ostream& operator<<(ostream& os,AA f);
private:
    int a,b;
};
AA AA::operator+(AA &x)
{
    return AA(a*x.b+b*x.a,b*x.b);
}
AA AA::operator-(AA &x)
{
    AA c;
    c.a=x.a;
    c.b=-x.b;
    return AA::operator+(c);
}
AA AA::operator*(AA &x)
{
    AA c;
    c.a=a*x.a;
    c.b=b*x.b;
    return c;
}
AA AA::operator/(AA &x)
{
    AA c;
    c.a=x.b;
    c.b=x.a;
    return AA::operator*(c);
}
void AA::print()
{
    AA::easy();
    if(a%b)
        cout<<a<<"/"<<b<<endl;
    else
        cout<<a/b<<endl;
}
ostream& operator<<(ostream& os,AA f)
{
    os<<f.a<<"/"<<f.b;
    return os;
}
void AA::easy()
{
    if(b<0)
    {
        b=-b;
        a=-a;
    }
    int t,x=a,y=b;
	while(y)
	{
		t = x%y;
		x = y;
		y = t;
	}
	if(x!=1)
    {
        a=a/x;
        b=b/x;
    }
    return;
}
int main()
{
    int a,b,c,d;
    char x;
    scanf("%d/%d%c%d/%d",&a,&b,&x,&c,&d);
    AA l(a,b),m(c,d),n;
    switch(x)
    {
        case '+':cout<<(l+m)<<endl;  break;
        case '-':cout<<(l-m)<<endl;  break;
        case '*':cout<<(l*m)<<endl;  break;
        case '/':cout<<(l/m)<<endl;  break;
    }
    return 0;
}
