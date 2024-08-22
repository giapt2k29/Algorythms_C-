#include<bits/stdc++.h>
using namespace std;
long long i,j,n,l[1001][1001],k,a[1000000],b[1000000],d[1001][1001];
void xuli()
{
   for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if (d[i][j]==1)
                {
                  l[i][j]=l[i-1][j-1]+1;
                }
            else
            l[i][j]=max(l[i-1][j],l[i][j-1]);
        }
    }
    i=n;j=n;
    cout<<l[n][n]<<endl;
    while (i>0||j>0)
    {
        if ((l[i][j]==l[i-1][j-1]+1)&&(d[i][j]==1))
            {
               k++;
               a[k]=i;
               b[k]=j;
               i--;
               j--;
            }
        else{
        if (l[i][j]==l[i-1][j]) i--;
        else j--;}
    }
    for (i=k;i>=1;i--) cout<<a[i]<<" "<<b[i]<<endl;
}
int main()
{
    freopen("duongthuy.inp","r",stdin);
    freopen("duongthuy.out","w",stdout);
    cin>>n;
    while(cin>>i>>j)
    {
        d[i][j]=1;
    }
    xuli();
}
