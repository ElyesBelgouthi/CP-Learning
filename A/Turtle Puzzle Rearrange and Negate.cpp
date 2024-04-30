#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,sum=0;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]<0) sum-=a[i];
            else sum+=a[i];
        }
        cout << sum << endl;
    }
}

int main()
{
    solve();
    return 0;
}
