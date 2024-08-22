#include<bits/stdc++.h>
using namespace std;
string s1,s2;
long long i,dem,sl,dau,moc;
int main()
{
   cin>>s1>>s2;
   for(i=0;i<s2.length();i++)
   {
      if(s1[i]==s2[i])
      {
         dem++;
      }
   }
   for(i=0;i<s1.length();i++)
   {
       if((i>=dem)&&(s2[dem]==s1[i]))
       {
            moc=i+1;
            break;
       }
   }
   sl=moc-dem;
   for(i=0;i<s1.length();i++)
   {
       if(s1[i]==s2[dem-1])
       {
          dau=i+1;
          break;
       }
   }
   cout<<dau<<" "<<dau+sl;
}
