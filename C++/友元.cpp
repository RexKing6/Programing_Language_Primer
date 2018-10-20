#include<iostream>
using namespace std;
class woman; // 前向声明
class man
{
public:
    void disp(woman &w);
    void reset(woman &w);
    man(string namee);
    string name;
};
class woman
{
public:
    woman(string namee);
    friend void man::disp(woman &w); // 将man的其中一个成员函数disp()设为woman的友元函数，就可以使用该函数访问woman对象的私有成员了
private:
    string name;
};

void man::disp(woman &w)
{
    cout << w.name << endl;
}
// man的reset()成员函数不是woman类的友元函数，因此不能访问其私有成员
/*
void man::reset(woman &w)
{
    w.name.clear();
}
*/
man::man(string namee)
{
    name=namee;
}
woman::woman(string namee)
{
    name=namee;
}
int main()
{
    man m("xiaoming");
    woman w("xiaohong");
    m.disp(w);
    return 0;
}


