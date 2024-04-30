#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n,nb=0;
        int tri[] = {15, 10, 6, 3, 1};
        cin >> n;
        for(int i=0;i<4;i++)
        {
            if(n==20) {
                nb+=2;
                n=0;
                break;
            }
            nb+= n/tri[i];
            n=n%tri[i];
        }
        nb+=n;
        cout << nb << endl;
    }
}

int main()
{
    solve();
    return 0;
}
