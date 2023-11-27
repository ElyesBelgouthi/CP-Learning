#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

ll binomialCoefficient(int n, int k) {
    if (k < 0 || k > n) return 0;
    if (k == 0 || k == n) return 1;

    vector<vector<ll>> dp(n + 1, vector<ll>(k + 1, 0));

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= min(i, k); j++) {
            if (j == 0 || j == i) {
                dp[i][j] = 1;
            } else {
                dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
            }
        }
    }

    return dp[n][k];
}


int main()
{
    vector<ll> v;
    int k,n;
    cin >> k >> n;
    ll pessa = pow(2,k);
    for(ll t=0; t<pessa; t++)
    {
        ll sum=0;
        for(int i=0; i<=n;i++)
        {
            if(i%pessa == t )
            {
                sum+=binomialCoefficient(n,i);
            }
        }
        v.push_back(sum);
    }
    for(ll t=0; t<pessa; t++)
    {
        cout << v[t] << " ";
    }
    return 1;
}
