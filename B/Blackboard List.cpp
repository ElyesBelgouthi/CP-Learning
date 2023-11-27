#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, a[100], n;
    cin >> t;
    for(int j=0; j<t; j++)
    {
        cin >> n;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        sort(a,a+n);
        cout << a[n-1];
    }
    return 0;
}
