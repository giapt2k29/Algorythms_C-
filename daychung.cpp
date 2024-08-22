#include<bits/stdc++.h>
using namespace std;
int a[10002],b[10002],kq[10002],d[10002];
int L[10002][10002];
int m,n,res;
void doc()
{
    cin>>m>>n;
    for(int i=1;i<=m;i++) {cin>>a[i];}
    for(int i=1;i<=n;i++) {cin>>b[i];}
}
void xuly()
{
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(a[i]==b[j])
            {L[i][j]=L[i-1][j-1]+1;}
            else
            {L[i][j]=max(L[i-1][j],L[i][j-1]);}
        }
    }
}
int inkq()
{
    int i=m,j=n;
    res = L[m][n];
    cout<<res<<endl;
    while((i>0)&&(j>0))
    {
        if(a[i]==b[j])
        {kq[res]=a[i];res--;i--;j--;}
        else
        {
            if(L[i][j]==L[i][j-1]) {j--;}
            else {i--;}
        }
    }
    for(int i=1;i<=L[m][n];i++)
    {
        cout<<kq[i]<<" ";
    }
}
int main()
{
    freopen("daychung.inp","r",stdin);
    freopen("daychung.out","w",stdout);
    doc();
    xuly();
    inkq();
}
