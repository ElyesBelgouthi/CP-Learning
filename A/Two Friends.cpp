#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, nb=3;
        cin >> n;
        int p[n];
        for(int i=0;i<n;i++)
        {
            cin >> p[i];
            p[i]--;
        }
        for(int i=0;i<n;i++)
        {
            if(i==p[p[i]]) {
                nb=2;
                break;
            }
        }
        cout << nb << endl;

    }

}

int main()
{
    solve();

    return 0;
}
