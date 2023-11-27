#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

ll gcd(ll a, ll b) {
    while (b != 0) {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


void solve()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long a[n];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        sort(a,a+n);
        long long sum = 0;
        for(int i=0;i<n-2;i++)
        {
            for(int j=i+1;j<n-1;j++)
            {
                sum+= (n-j-1) * gcd(a[i],a[j]);
            }
        }
        cout << sum << endl;
    }
}

int main()
{
    solve();
    return 0;
}
