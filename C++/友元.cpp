#include<iostream>
using namespace std;
class woman; // ǰ������
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
    friend void man::disp(woman &w); // ��man������һ����Ա����disp()��Ϊwoman����Ԫ�������Ϳ���ʹ�øú�������woman�����˽�г�Ա��
private:
    string name;
};

void man::disp(woman &w)
{
    cout << w.name << endl;
}
// man��reset()��Ա��������woman�����Ԫ��������˲��ܷ�����˽�г�Ա
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


