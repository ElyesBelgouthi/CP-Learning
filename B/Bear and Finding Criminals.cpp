#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n,a,numba=0;
    cin >> n >> a;
    a--;
    int c[n];
    for(int i=0;i<n;i++)
    {
        cin >> c[i];
    }
    if (c[a]==1) numba++;
    int j=1,tester;
    if((n%2==1)&& (a==n/2)) tester =0;
    else if(a<n/2) tester = 0;
    else tester = n-1;
    while(j<=abs(a-tester))
    {
        cout << "-------Mohsen--1---\n";
        if((c[a-j]==1) && (c[a+j]==1) ) numba+=2;
        j++;
    }

    if(tester == 0)
    {
        j+=a;
        while(j< n)
        {
        cout << "-------Mohsen--2---\n";

            if(c[j]==1) numba++;
            j++;
        }

    } else
    {
        j=0;
        while(j<=(2*a-n))

        {        cout << "-------Mohsen--3---\n";

            if(c[j]==1) numba++;
            j++;
        }

    }
    cout << numba << endl;

}

int main()
{
    solve();

    return 0;
}
