#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int *p=new int[num];
    for(int i=0;i<num;i++)
    {
        p[i]=i;
        cout<<i<<endl;
    }
    return 0;
}
