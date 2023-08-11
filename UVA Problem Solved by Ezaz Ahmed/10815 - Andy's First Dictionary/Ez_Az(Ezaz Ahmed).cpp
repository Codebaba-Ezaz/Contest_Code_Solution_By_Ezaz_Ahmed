                //Author: Ezaz Ahmed Aka CodeBaba (UVA Handle: Ez_Az)
#include <bits/stdc++.h>
using namespace std;
#define Ezaz ios_base::sync_with_stdio(false);
#define Ahmed cin.tie(NULL);
#define st string
#define __for(i, a, b) for(int i = a; i < b; i++)
#define Infinity while(1)
#define _for(i, a, b) for(int i = a; i <= b; i++)
#define ll long long
#define lg length()
#define jah cout <<
#define abar << endl;
#define colo while
#define nao cin >>
#define Tata return 0
#define vel vector<long long>
#define vec vector<char>
#define YES cout << "YES"
#define NO cout << "NO"

long long GCD(long long x, long long y)
{
    if(y == 0)
        return x;
    else
        return GCD(y, x % y);
}

long long LCM(long long x, long long y)
{
    return (x * y / (GCD(x, y)));
}

void solve()
{
    set<st>wo;
    st a,d="";
    while(getline(cin,a))
    {
        transform(a.begin(),a.end(),a.begin(),::tolower);
        st c="";
        for(char l:a)
        {
            if(isalpha(l))
            {
                c+=l;
            }
            else if(!c.empty())
            {
                wo.insert(c);
                c.clear();
            }
        }
        //cout<<c;
        if(!c.empty())
        {
            wo.insert(c);
        }
    }
    for(auto ls:wo)
    {
        jah ls abar
    }
}

int main()
{
    Ezaz Ahmed
    solve();
    return 0;
}
