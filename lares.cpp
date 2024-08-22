#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("lares.inp","r",stdin);
    freopen("lares.out","w",stdout);
    long long n,m,k;
    cin>>n>>m>>k;
    while (k>0)
    {
    if (n/2>=m) {n--;k--;}
    else {m--;k--;}
    }
    if (m>n/2) cout<<n/2;
    else cout<<m;
}
