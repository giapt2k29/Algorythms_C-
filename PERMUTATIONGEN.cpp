#include<bits/stdc++.h>
using namespace std;
long long vt,n,a[100000],vt1,i;
void xuli()
{
   for(i=n;i>=1;i--)
   {
      if(a[i]>=a[i+1])
      vt=i;
      break;
   }
   vt1=0;
    for(i=n;i>=vt;i--)
    {
        if(a[i]>a[vt])
        {
            vt1=i;
            break;
        }
    }
        if(vt1==0)
        vt1=vt;
        swap(a[vt],a[vt1]);
    for(i=1;i<=vt;i++)
    cout<<a[i]<<" ";
      for(i=n;i>=vt;i--)
     cout<<a[i]<<" ";
}
int main()
{
   cin>>n;
   for(i=1;i<=n;i++)
   cin>>a[i];
   xuli();
}
