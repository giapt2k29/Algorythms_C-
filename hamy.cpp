#include<bits/stdc++.h>
using namespace std;
long long i,j,x,y,s,dem,a,b;
long long xuli(long long a)
{
    s=0;
     for(i=1;i<a;i++)
     {
         if(a%i==0)
         {
            s=s+i;
         }
     }
     return s;
}
int main()
{
    cin>>x>>y;
    for(a=x;a<y;a++)
    {
       for(b=a+1;b<=y;b++)
       {
          if((xuli(a)==b)&&(xuli(b)==a))
          {
          dem++;
          cout<<a<<" "<<b<<endl;
          }
       }
    }
    if(dem==0) cout<<"ko co";
}
