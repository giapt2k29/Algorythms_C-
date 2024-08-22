#include<bits/stdc++.h>
using namespace std;
vector<int> gen(vector<int> m)
{
    vector<int> ans;
    for(int mask=1<<m.size();mask--;)
    {
     int    sumM=0;
        for(int i=0;i<m.size();++i)
        {
            if(mask>>i&1) sumM+=m[i];
        }
        ans.push_back(sumM);
    }
    return ans;
}
main()
{
    int n,M;
    cin>>n>>M;
    vector<int> m(n);
    for(auto &x:m) cin>>x;
   auto A=gen(vector<int>(m.begin(),m.begin()+n/2));
   auto B=gen(vector<int>(m.begin()+n/2,m.end()));
   sort(B.begin(),B.end());
   long long ans=0;
   for(int a:A)
   {
       auto it=upper_bound(B.begin(),B.end(),M-a);
       ans+=it-B.begin();
   }
   cout<<ans;
}
