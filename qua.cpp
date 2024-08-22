#include<bits/stdc++.h>
using namespace std;
int n,s,a[10000],l[600000],t=0,b[100000],i;
void xuly()
{
    int maxtong=0,max1=0;
    l[0]=1;
    for(int i=1;i<=n;i++)
    {
        max1=maxtong;
        for(int st=maxtong;st>=0;st--)
        {
            if((l[st]!=0)&&(l[st+a[i]]==0))
            {
                l[st+a[i]]=i;
                if(s==st+a[i]) {exit;}
                if(max1<st+a[i]){max1=st+a[i];}
            }
            maxtong=max1;
        }
    }
}
void inkq()
{
    int i;
    if(l[s]==0) {cout<<0;}
    else
    {
        while(s!=0)
        {
            i=l[s];
            b[i]=a[i];
            s=s-a[i];
        }
    }
}
int main()
{
    freopen("qua.inp","r",stdin);
    freopen("qua.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    cin>>a[i];
    for(int i=1;i<=n;i++){
    t=t+a[i];}
    if(t%2==0)
    {
      s=t/2;
    }
    else s=(t+1)/2;
        xuly();      inkq();
    for(int i=1;i<=n;i++)
    {
        if(b[i]!=a[i])
            cout<<a[i]<<" ";
    }
    cout<<t/2<<endl;
     for(int i=1;i<=n;i++)
    {
        if(b[i]==a[i])
            cout<<a[i]<<" ";
    }
    cout<<t-t/2;
}
