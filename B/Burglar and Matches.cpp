#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void solve()
{
    ll n,m,j=0,res=0;
    map<ll,ll> mpmp;
    vector<ll> keys;
    cin >> n >> m;
    ll a[m],b[m];
    for(ll i=0;i<m;i++)
    {
        ll ex,becks;
        cin >> ex >> becks;
        if(mpmp.count(becks)==0) mpmp[becks] = ex;
        else mpmp[becks] += ex;
    }
    for(const auto& pair :mpmp)
    {
        keys.push_back(pair.first);
    }
    sort(keys.begin(), keys.end(), [](ll a, ll b) {
        return a > b;
    });
    while(n>0 && j<m)
    {
        if(n>=mpmp[keys[j]])
        {
            n-=mpmp[keys[j]];
            res+= mpmp[keys[j]] * keys[j];
        } else
        {
            res+= keys[j] * n;
            n=0;
        }
        j++;
    }
    cout << res << endl;

}

int main()
{
    solve();
    return 0;
}
