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
       int nb=1;
       bool first = false;
       for(int i=0;i<s.size()-1;i++)
       {
           if(!first) {
            if(s[i] == '0' && s[i+1] == '1') first=true;
           }
           if(s[i] != s[i+1]) nb++;
       }
       if(first) nb--;
       cout << nb << endl;
    }

}

int main()
{
    solve();

    return 0;
}
