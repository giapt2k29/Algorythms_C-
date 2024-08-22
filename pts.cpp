#include<bits/stdc++.h>
using namespace std;
int n,s,a[10000],l[600000];
void doc()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    cin>>a[i];
}
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
                //if(s==st+a[i]) {exit;}
                if(max1<st+a[i]){max1=st+a[i];}
            }
            maxtong=max1;
        }
    }
    for(int i=1;i<=maxtong+1;i++){
        if(l[i]==0) {cout<<i;break;}}

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
            cout<<a[i]<<" ";
            s=s-a[i];
        }
    }
}
int main()
{
 //  freopen("pts.inp","r",stdin);
  //  freopen("pts.out","w",stdout);
    doc();    xuly();      inkq();
}
