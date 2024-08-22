#include<bits/stdc++.h>
using namespace std;
int stringToNum(char c)
{
    return c - '0';
}
char numToString(int n)
{
    return (char)(n+48);
}
void chuanHoa(string &a, string &b)
{
    int l1 = a.length(), l2 = b.length();
    if (l1 >= l2)
    {
        b.insert(0, l1-l2, '0');
    }
    else
    {
        a.insert(0, l2-l1, '0');
    }
}
string sum(string a, string b)
{
    string s = "";
    chuanHoa(a,b);
    int l = a.length();
    int temp = 0;
    for (int i=l-1; i>=0; i--)
    {
        temp = stringToNum(a[i]) + stringToNum(b[i]) + temp;
        s.insert(0,1,numToString(temp%10));
        temp = temp/10;
    }
    if (temp>0)
    {
        s.insert(0,1,numToString(temp));
    }
    return s;
}
int main()
{
    string a, b, s;
    cin>>a>>b;
    s = sum(a,b);
    cout<<s;
    return 0;
}
