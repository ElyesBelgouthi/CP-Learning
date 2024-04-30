#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int t;
    cin >> t;
    while(t--)
    {
        map<int,int> mappa;
        mappa[0] = 0;
        mappa[1] = 0;
        mappa[2] = 0;
        int n,moves=0,sum=0;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            mappa[a[i]%3]++;
            sum+=a[i];
        }
        if(sum%3 ==1) {
            if(mappa[1]) cout << 1 << endl;
            else cout << mappa[2]%3 << endl;

        }
        else if(sum%3 ==2) {
            cout << 1 << endl;
        }
        else cout << 0 << endl;
    }
}

int main()
{
    solve();
    return 0;
}
