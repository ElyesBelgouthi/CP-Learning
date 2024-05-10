#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,nb=0;
        cin >> n;
        int a[n], b[n];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin >> b[i];
        }
        int i=0;
        int j=0;
        while(j<n && i<n) {
            if(a[i] > b[j])
            {
                nb++;
                j++;
            } else
            {
                i++;
                j++;
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
