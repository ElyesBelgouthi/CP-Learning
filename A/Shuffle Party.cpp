#include <bits/stdc++.h>

using namespace std;
void solve()
{
    int t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int poww = floor(log2(n));
        long long answer = 1;

        cout << (long long)(pow(2,poww)) << endl;
    }
}

int main()
{
    solve();
    return 0;
}
