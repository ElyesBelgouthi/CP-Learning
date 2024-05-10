#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, nb=0;
        cin >> n;
        string s;
        cin >> s;
        for(int i=0; i<n ; i++)
        {
            if(s[i] == 'U') nb++;
        }
        if(nb%2 == 0) cout << "NO" << endl;
        else cout << "YES" << endl;

    }

}

int main()
{
    solve();

    return 0;
}
