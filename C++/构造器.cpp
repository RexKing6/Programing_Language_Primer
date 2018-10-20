#include<iostream>
using namespace std;
class car
{
    public:
    int oil;//属性
    int length;//属性
    int width;//属性
    string name;//属性
    car(void);//构造器
    ~car();//析构器
    int run(void);//方法
};
car::car(void)//构造器内部
{
    oil=400;
    length=100;
    width=20;
    name="青爷威武";//并不需要重新定义声明变量
}
car::~car()//析构器内部，并不知道写啥好
{
    cout<<"威武青爷"<<endl;//只是为了确定程序到最后有没有调用析构器
}
int car::run(void)
{
    cout<<"RUN RUN RUN RUN"<<endl;
}
int main()
{
    car car;//尽管上面作了种种赋值，这句还是不能少
    car.run();
    cout<<car.name<<endl;
    return 0;
}
/*到了这里，我对构造器的作用还是不清楚，估计是在创建
对象之前类自己的属性吧，但小甲鱼说：构造器用来完成事
先的初始化（这点我理解）和准备工作，即申请分配内存，
这我就不理解了，因为你在用完后，还是得创建，在有些地
方，构造器里却放在打开文件的操作，析构器里放着关闭文
件的操作，这点跟上面第二点有点契合，可是这样的话，他
们的作用岂不是很水？*/
