#include<bits/stdc++.h>
using namespace std;
vector<int> gen(vector<int> m)
{
    vector<int> ans;
    for(int mask=1<<m.size()*2;mask--;)
    {
      int sumM=0;
        for(int i=0;i<m.size();++i)
        {
            int t=mask>>1*2&3;
            if(t==3) goto next_mask;
            if(t==1) sumM-=m[i];
            if(t==2) sumM+=m[i];
        }
        ans.push_back(sumM);
        next_mask:;
    }
    return ans;
}
main()
{
    freopen("bca.inp","r",stdin);
    freopen("bca.out","w",stdout);
    int n,M;
    cin>>n>>M;
    vector<int> m(n);
    for(auto &x:m) cin>>x;
   vector<int> A=gen(vector<int>(m.begin(),m.begin()+n/2));
   vector<int> B=gen(vector<int>(m.begin()+n/2,m.end()));
   sort(B.begin(),B.end());
   long long ans=0;
   for(int a:A)
   {
       ans+=upper_bound(B.begin(),B.end(),M-a)-lower_bound(B.begin(),B.end(),M-a);
   }
   cout<<ans;
}
