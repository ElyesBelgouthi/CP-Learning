#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        int n,k,impair=0;
        string s;
        map<char,int> m;

        cin >> n >> k;
        cin >> s;
        if(n-k == 1 ) {
            cout << "YES" << endl;
        }
        else {
        for(int i=0; i<n; i++)
        {
            if(!m.count(s[i])) m[s[i]] = 1;
            else m[s[i]]++;
        }
         for (const auto& [key, value] : m)
        {
            if(value%2 != 0)
            {
                impair++;
            }
        }

        if(k >= impair)
        {
            cout << "YES" << endl;
        } else if (((n-k)%2 == 1 ) && impair-k == 1)
        {
            cout << "YES" << endl;
        } else cout << "NO" << endl;
        }
    }


    return 0;
}
