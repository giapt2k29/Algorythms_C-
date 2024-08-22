#include<bits/stdc++.h>
using namespace std;
int n,a[10];
void out()
{
    for(int i=1;i<=n;i++)
    cout<<a[i];
    cout<<endl;
}
void xuli(int i)
{
    for(int j=0;j<=1;j++)
    {
        a[i]=j;
        if(i==n) out();
        else xuli(i+1);
    }
}
int main()
{
    cin>>n;
    xuli(1);
}
