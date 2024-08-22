#include<bits/stdc++.h>
using namespace std;
struct ii
{
    int x,y;
};
ii a[1001];
long long n,m,i,j,t,max1;
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i].x>>a[i].y;
    }
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            t=sqrt((a[i].x-a[j].x)*(a[i].x-a[j].x)+(a[i].y-a[j].y)*(a[i].y-a[j].y));
            if(t>max1) max1=t;
        }
    }
    cout<<max1;
}
