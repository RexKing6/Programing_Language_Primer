#include<iostream>
using namespace std;
int n;
int main()
{
    while(cin>>n)
    {
        int j=0,s=0;
        for(int i=0,a;i<n;i++)
        {
            cin>>a;
            s+=a;
            j+=i;
        }
        cout<<s-j<<endl;
    }
    return 0;
}
