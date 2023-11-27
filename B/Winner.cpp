
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    map<string, long long> mp;
    int maxi = INT_MIN;
    string winner;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        string s;
        int p;
        cin >> s >> p;
        if(mp.count(s)!=0) mp[s]+= p;
        else mp[s] = p;

    }
    for (const auto& pair : mp) {
    if(pair.second > maxi)
            {
                maxi = pair.second;
                winner = pair.first;
            }
    }


    cout << winner << endl;
    return  0;
}
