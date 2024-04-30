#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        long long  i=0, nb1=0;
        long long tot=0;
        while(i<s.size())
        {
            if(s[i] == '1') nb1++;
            if(s[i]=='0')
            {
                if(nb1 != 0) tot+=nb1+1;
            }
            i++;
        }
        cout << tot << endl;
    }

}

int main()
{
    solve();

    return 0;
}
