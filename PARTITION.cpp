#include<bits/stdc++.h>
using namespace std;
int n,x[1000],t[1000],m,dem,i;
void out()
{
  //  if(dem==m)
  //  {
        for(int h=1;h<=i;h++)
        cout<<x[h]<<" ";
        dem=0;
  //  }
  //  else dem++;
}
void xuli(int i)
{
    int j;
    for(j=x[i-1];j<=(n-t[i-1]);j++)
    {
        x[i]=j;
        t[i]=t[i-1]+j;
        if(t[i]==n) out();
        else xuli(i+1);
    }
}
int main()
{
    cin>>n>>m;
    x[0]=1;
    xuli(1);

}
