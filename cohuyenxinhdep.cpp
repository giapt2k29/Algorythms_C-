#include<bits/stdc++.h>
using namespace std;
long long n,m,l[1001][1001],a[10000],b[10000],c[100000];
void xuli()
{
     for(int i=1;i<=m;i++)
       {
          l[i][0]=0;
       }
     for(int j=1;j<=n;j++)
           l[0][j]=0;
     for(int i=1;i<=m;i++)
         {
            for(int j=1;j<=n;j++)
               {
                 if(a[i]==b[j]) l[i][j]=l[i-1][j-1]+1;
            else l[i][j]=max(l[i-1][j],l[i][j-1]);
               }
          }
   cout<<l[m][n]<<endl;

      int i=m;int j=n,k=0;
      while(i>0)
      {
          if(a[i]==b[j])
          {
              k++;
              c[k]=a[i];
              i--;j--;
          }
          else
          {if(l[i-1][j]==l[i][j-1]) i--;
          else j--;}
      }
      for(i=k;i>=1;i--)
        cout<<c[i]<<" ";
}
int main()
{
    cin>>m>>n;
    for(int i=1;i<=m;i++)
        cin>>a[i];
    for(int j=1;j<=n;j++)
        cin>>b[j];
    xuli();
}


