#include<bits/stdc++.h>
using namespace std;
long long i,n,a[10000001],dem=1,c,k,j;
int main()
{
    freopen("bai3_10_2017_2018.inp","r",stdin);
    freopen("bai3_10_2017_2018.out","w",stdout);
    cin>>c>>k;
        for (i=1;i<=c;i++)
            cin>>a[i];
        sort(a+1,a+c+1);
        for (i=2;i<=c;i++)
        if (a[i]-a[i-1]>k) dem++;
        cout<<dem<<endl;
}
