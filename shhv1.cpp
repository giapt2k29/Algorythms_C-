#include <iostream>
#include <fstream>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <cstdio>
#include <cstdlib>

using namespace std;

typedef int64_t             intt;

intt    n, a[20], vt[20], s, t, l, x;
intt    gthua[20], res;

int main()
{
freopen("shhv.inp","r",stdin);
freopen("shhv.out","w",stdout);
    while (scanf("%I64d",&x) != EOF) a[++n] = x;
    s = a[n]; n--;
    gthua[0] = 1;
    for (int i=1;i<=n;i++) gthua[i] = gthua[i-1]*i;

    /////////////////////////////

    for (int i=1;i<=12;i++) vt[i] = i;
    res = 1;
    for (int i=1;i<=n;i++) {
        res += (vt[a[i]]-1) * gthua[n-i];
        for (int j=a[i]+1;j<=n;j++) vt[j]--;
    }
    printf("%I64d\n",res);

    ////////////////////////////

    for (int i=1;i<=n;i++) vt[i] = i;
    t = 1;
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=n;j++)
            if (t + j * gthua[n-i] > s) {
                l = j-1;
                break;
            }
        t += l*gthua[n-i];
        a[i] = vt[l+1];
        for (int j=l+1;j<=n;j++) vt[j] = vt[j+1];
    }
    for (int i=1;i<=n;i++) printf("%I64d ",a[i]);

    //////////////////////////

    return 0;
}
