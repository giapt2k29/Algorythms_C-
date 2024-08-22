#include<bits/stdc++.h>
using namespace std;
double long a,b,c,denta,t1,t2;
int main()
{
   // freopen("gpt2.inp","r",stdin);
    //freopen("gpt2.out","w",stdout);
    cin>>a>>b>>c;
    if(a==0)
    {
        if((b==0)&&(c==0)) cout<<-1;
        if((b==0)&&(c!=0)) cout<<0;
        if(b!=0) {cout<<1<<endl;t1=-c/b;cout<<setprecision(5)<<fixed<<t1;exit(0);}
    }
    else
    {
    denta=b*b-4*a*c;
    if(denta<0) {cout<<"0";exit(0);}
    if(denta==0) {
            cout<<1<<endl;
    t1=(-b)/(2*a);
    cout<<setprecision(5)<<fixed<<t1;
    exit(0);
    }
    if(denta>0)
    {
        cout<<2<<endl;
       t1=((-b)-(sqrt(denta)))/(2*a);
       t2=((-b)+(sqrt(denta)))/(2*a);
       cout<<setprecision(5)<<fixed<<t1<<endl;
       cout<<setprecision(5)<<fixed<<t2;
       exit(0);
    }
    }
}
