#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int t,n;
    string cells;
    cin >> t;
    while(t--)
    {
        int counts = 0,e=0;
        cin >> n;
        cin >> cells;
        for(int i=0;i<n;i++)
        {
            if(cells[i]=='.')
            {
                if(e<2)
                {
                    e++;
                    counts++;
                } else
                {
                    counts = 2;
                    break;
                }
            } else
            {
                e=0;
            }
        }
        cout << counts << endl;
    }
}

int main()
{
    solve();
    return 0;
}
