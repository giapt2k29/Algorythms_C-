#include<bits/stdc++.h>
using namespace std;
long long dem,i,j,m,n,h,k,l,o,a[1001][1001],q1[1001],q2[1001],p[1001][1001];
void xuli()
{
    int dau=1,cuoi=1,k,l;
    q1[dau]=k;
    q2[dau]=l;
    memset(p,0,sizeof(p));
    p[k][l]=5;
    while(dau<=cuoi)
    {
        i=q1[dau];
        j=q2[dau];
        dau=dau+1;
        if((i==h)&&(j==o)) {break;}
        if((i>l)&&(p[i-1][j]==0)&&(a[i-1][j]==0))
           {
               p[i-1][j]=4;
               cuoi++;
               q1[cuoi]=i-1;
               q2[cuoi]=j;
           }
   if((i<m)&&(p[i+1][j]==0)&&(a[i+1][j]==0))
   {
       p[i+1][j]=2;
       cuoi++;
       q1[cuoi]=i+1;
       q2[cuoi]=j;
   }
   if((j>1)&&(p[i][j-1]==0)&&(a[i][j-1]==0))
   {
       p[i][j-1]=3;
       cuoi++;
       q1[cuoi]=i;
       q2[cuoi]=j-1;
   }
   if((j<n)&&(p[i][j+1]==0)&&(a[i][j+1]==0))
   {
       p[i][j+1]=1;
       cuoi++;
       q1[cuoi]=i;
       q2[cuoi]=j-1;
   }
}
}
void kq()
{
    int so;
    if(p[h][o]==0) cout<<"khong co duong di";
    else
    {
        so=1;
        cout<<"co duong di";
        i=h;
        j=o;
        q1[so]=i;
        q2[so]=j;
        while((i!=k)||(j!=l))
        {
            if(p[i][j]==1)
            {
                j--;
                so++;
                q1[so]=i;
                q2[so]=j;
            }
            if(p[i][j]==2)
            {
                i--;
                so++;
                q1[so]=i;
                q2[so]=j;
            }
            if(p[i][j]==3)
            {
                j++;
                so++;
                q1[so]=i;
                q2[so]=j;
            }
            if(p[i][j]==4)
            {
                i++;
                so++;
                q1[so]=i;
                q2[so]=j;
            }
        }
        for(i=so;i>=1;i--)
            cout<<q1[i]<<" "<<q2[i];
    }
}
int main()
{
    //freopen("bai3_12_2009_2010.inp","r",stdin);
   // freopen("bai3_12_2009_2010.out","w",stdout);
    cin>>m>>n>>k>>l>>h>>o;
    for(i=0;i<=m+1;i++)
    {
      for(j=0;j<=n+1;j++)
      {
        a[i][j]=1;
    }
    }
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
           cin>>a[i][j];
    }
    xuli;
    kq;
    }
