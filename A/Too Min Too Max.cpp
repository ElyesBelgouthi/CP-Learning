#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        sort(a,a+n);
        cout << abs(a[n-1]-a[0]) + abs(a[n-2]-a[0]) +abs(a[n-2]-a[1]) +abs(a[n-1]-a[1]) << endl;
    }
}

int main()
{
    solve();
    return 0;
}
