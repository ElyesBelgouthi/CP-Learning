#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string n,mohsa;
    int a[] = {0,0,0,0,0,0,0,0,0,0},sum=0,res=1;
    cin >> n;
    if(n.size()==1)
    {
        cout << 0 << endl;
        return;
    }

    for(int i=0;i<n.size();i++)
    {
        a[n[i]-'0']++;
    }
    for(int i=0;i<10;i++)
    {
        sum+=a[i]*i;
    }
    mohsa = to_string(sum);
    while(mohsa.size()>1)
    {
        sum=0;
        for(int i=0;i<mohsa.size();i++)
        {
            sum+=mohsa[i]-'0';
        }
        res++;
        mohsa = to_string(sum);
    }
    cout << res << endl;
}

int main()
{
    solve();
    return 0;
}
