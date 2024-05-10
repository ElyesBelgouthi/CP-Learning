#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c,d;
        cin >> a >> b >> c >> d;
         if ((c>min(a,b)) && (c <max(a,b))) {
            if ((d>min(a,b)) && (d <max(a,b))) cout << "NO" << endl;
            else cout <<   "YES" << endl;
            }
        else {
            if ((d>min(a,b)) && (d <max(a,b))) cout << "YES" << endl;
            else cout <<   "NO" << endl;

        }

    }

}

int main()
{
    solve();

    return 0;
}
