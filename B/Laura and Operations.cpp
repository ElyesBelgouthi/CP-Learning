#include <bits/stdc++.h>

using namespace std;

int solvi(int a, int b, int c)
{
    if (b == c) return 1;
    int diff = max(b,c) - min(b,c);
    if (diff % 2 == 1) return 0;
    a += min(b,c);
    if(a> diff/2) return 1;
}

void solve()
{
   int t,a,b,c,resA=0,resB=0,resC=0,maxi;
   cin >> t;
   while(t--)
   {
       cin >> a >> b >> c;
       resA= solvi(a,b,c);
       resB= solvi(b,a,c);
       resC= solvi(c,b,a);
       cout << resA << ' ' << resB << ' ' << resC << '\n';
   }
}

int main()
{
    solve();
    return 0;
}
