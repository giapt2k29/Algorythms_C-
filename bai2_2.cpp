#include<bits/stdc++.h>
using namespace std;
long long n,i,k,dem;
int main(){
    cin>>n;
    freopen("bai2_2.inp","r",stdin);
    freopen("bai2_2.out","w",stdout);
    for(i=2;i<=n;i++)
    {
        dem=0;
        while(n%i==0){
            dem++;
            n=n/i;
        }
        if(dem){
            cout<<i;
            if(dem>1)
            {
                for(k=1;k<dem;k++)
                cout<<" "<<i;
            }
            if(n>i){
                cout<<" ";
            }
        }
    }
}
