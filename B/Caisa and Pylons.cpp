#include <bits/stdc++.h>

using  namespace std;

void solve()
{
    int n,money=0,energy=0;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    money=a[0];
    for(int i=0;i<n-1;i++)
    {
        energy+=(a[i]-a[i+1]);
        if(energy<0)
        {
            money+=abs(energy);
            energy=0;
        }
    }
    cout << money << endl;
}

int main()
{

    solve();
    return 0;
}
