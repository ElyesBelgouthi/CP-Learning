#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a[60],x,t;
    cin >> t;
    while(t--)
    {
        int maxi;
        cin >> n >> x;
        for(int i=0; i< n; i++) cin >> a[i];
        maxi = a[0];
        for(int i=1;i<n;i++ )
        {
            maxi= max(maxi, a[i]-a[i-1]);
        }
        maxi = max(maxi, 2*(x-a[n-1]));
        cout << maxi << '\n';
    }

    return 0;
}
