#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,t,a[200000];
    cin >> t;
    for(int j=0; j<t; j++)
    {
        cin >> n;
        for(int i=1; i<n+1 ; i++)
        {
            a[i] = 7* i + 2* (i-1) ;
            cout << a[i] <<" " ;
        }
        cout << endl;
    }



    return 0;
}
