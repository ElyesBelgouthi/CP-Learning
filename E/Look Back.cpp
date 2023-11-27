#include <bits/stdc++.h>
typedef long long  ll;

using namespace std;

int main()
{
    int t;

    cin >> t;
    for(int j=0; j<t; j++)
    {
        int n;
        int inc=0;
        vector<ll> v;
        cin >> n;
        for(int i=0;i<n;i++)
        {
            ll nut;
            cin >> nut;
            v.push_back(nut);
        }
        for(int i=1;i<n;i++)
        {
            int jess;
            if(v[i-1]> v[i])
            {
                jess = ceil(log2((double)v[i-1]/v[i]));
                inc+= jess;
                v[i]*=pow(2,jess);
            }
        }
        cout << inc << endl;
    }
    return 0;
}
