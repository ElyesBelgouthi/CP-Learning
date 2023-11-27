#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n,maxi=-1,numba=1;
    cin >> n;
        int a[n];

    for(int i=0;i<n ; i++)
    {
        cin >> a[i];
    }
    for(int i=0;i<n;i++)
    {
        int mohsa = a[i];
        for(int j=i+1; j<n;j++)
        {
            if(mohsa>=a[j]){

                numba++;
                mohsa=a[j];
            }else break;
        }
        mohsa = a[i];

        for(int j=i-1; j>=0;j--)
        {
            if(mohsa>=a[j])
            {
                numba++;
                mohsa=a[j];
            }else break;
        }
        maxi = max(maxi,numba);
        numba=1;
    }

    cout << maxi << endl;
}

int main()
{
    solve();
    return 0;
}
