#include<bits/stdc++.h>
#define ii pair<int,int>
#define x first
#define y second
using namespace std;
long long n;
ii a[1000001];
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i].x;
        a[i].y=i;
    }
    sort(a+1,a+n+1);
    for(int i=1;i<=n;i++)
    {
        cout<<a[i].y<<" ";
    }
}
