#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int t;
    cin >> t;
    while(t--)
    {
        bool test = false;
        string s,r;
        cin >> s;
        r=s;
        for(int i=0; i<s.size()-1;i++)
        {
            if(s[i] != s[i+1])
            {
                test=true;
                swap(r[i],r[i+1]);
                break;
            }


        }
        if(test) {
            cout << "YES" << endl;
            cout << r << endl;
        }
        else {
            cout << "NO" << endl;
         }
    }

}

int main()
{
    solve();

    return 0;
}
