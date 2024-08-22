#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> ii;
long long k,n,a[100000000],s,x,m,i;
void xuli(long long n,long long a[])
{
   x=-1;
   s=-1;
   map<int,int> d;
   sort(a+1,a+n+1);
    for(i=n;i>=1;i--)
    {
        d[a[i]]++;
        if(d[a[i]]==2) {
        if(x==-1) x=a[i];
        else {
             s=x*a[i];
             break;
             }
        } else if(d[a[i]]==4) {
				s=a[i]*a[i];
				break;
        }
    }
    cout<<s<<endl;
}
int main()
{
    freopen("rgame.inp","r",stdin);
    freopen("rgame.out","w",stdout);
    cin>>k;
        while(k--)
        {
            cin>>n;
            for(i=1;i<=n;i++)
                cin>>a[i];
            xuli(n,a);
        }
}

