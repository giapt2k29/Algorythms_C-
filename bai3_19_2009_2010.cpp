#include<bits/stdc++.h>
using namespace std;
long long f,s,dem,i,j,m,n,h,k,l,o,a[1001][1001],q[1001][1001],p[1001][1001];
void xuli()
{
    int dau=1,cuoi=1,k,l;
    q[1][dau]=k;
    q[2][dau]=l;
    memset(p,0,sizeof(p));
    p[k][1]=5;
    while(dau<=cuoi)
    {
        i=q[1][dau];
        j=q[2][dau];
        dau=dau+1;
        if((i==h)&&(j==o)) exit(0);
        if((i>l)&&(p[i-1][j]==0)&&(a[i-1][j]==0))
           {
               p[i-1][j]=4;
               cuoi++;
               q[1][cuoi]=i-1;
               q[2][cuoi]=j;
           }
   if((i<m)&&(p[i+1][j]==0)&&(a[i+1][j]==0))
   {
       p[i+1][j]=2;
       cuoi++;
       q[1][cuoi]=i+1;
       q[2][cuoi]=j;
   }
   if((j>1)&&(p[i][j-1]==0)&&(a[i][j-1]==0))
   {
       p[i][j-1]=3;
       cuoi++;
       q[1][cuoi]=i;
       q[2][cuoi]=j-1;
   }
   if((j<n)&&(p[i][j+1]==0)&&(a[i][j+1]==0))
   {
       p[i][j+1]=1;
       cuoi++;
       q[1][cuoi]=i;
       q[2][cuoi]=j-1;
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
        q[1][so]=i;
        q[2][so]=j;
        while((i!=k)||(j!=l))
        {
            if(p[i][j]==1)
            {
                j--;
                so++;
                q[1][so]=i;
                q[2][so]=j;
            }
            if(p[i][j]==2)
            {
                i--;
                so++;
                q[1][so]=i;
                q[2][so]=j;
            }
            if(p[i][j]==3)
            {
                j++;
                so++;
                q[1][so]=i;
                q[2][so]=j;
            }
            if(p[i][j]==4)
            {
                i++;
                so++;
                q[1][so]=i;
                q[2][so]=j;
            }
        }
        for(i=so;i>=1;i--)
            cout<<q[1][i]<<" "<<q[2][i];
    }
}
int main()
{
    cin>>m>>n>>k>>l>>h>>o;
    for(i=1;i<=m;i++)
    {
        dem=0;
        while(cin>>f>>s)
        {
            dem++;
            if(s==1) a[1][dem]=1;
            if(s==0) a[1][dem]=0;
        }
    }
    xuli;
    kq;
}
