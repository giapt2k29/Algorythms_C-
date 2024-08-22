#include<bits/stdc++.h>
using namespace std;
int n,l,r;
long long it[4000005],dp[1000005];
void update(int i,int l,int r,int pos) {
    if (l>pos||r<pos) {
        return;
    }
    if (l==r) {
        it[i]=dp[l];
        return;
    }
    int mid=(l+r)/2;
    update(i*2,l,mid,pos);
    update(i*2+1,mid+1,r,pos);
    it[i]=max(it[i*2],it[i*2+1]);
}
long long get(int i,int l,int r,int le,int ri) {
    if (l>ri||r<le) {
        return 0;
    }
    if (l>=le&&r<=ri) {
        return it[i];
    }
    int mid=(l+r)/2;
    return max(get(i*2,l,mid,le,ri),get(i*2+1,mid+1,r,le,ri));
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cin>>n>>l>>r;
    long long ans=0;
    for (int i=1;i<=n;i++) {
        int x;
        cin>>x;
        if (i>l) {
            long long z=get(1,1,n,max(1,i-r),i-l);
            dp[i]=z+x;
        }
        else {
            dp[i]=x;
        }
        update(1,1,n,i);
        ans=max(ans,dp[i]);
    }
    cout<<ans;
}
