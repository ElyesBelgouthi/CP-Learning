#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,t,k,a[100];
    cin >> t;
    for(int i=0;i<t;i++)
    {
            bool test = false;

        cin >> n >> k;
        for(int j=0; j<n; j++)
        {
            cin >> a[j];
            if(a[j]== k){
                test = true;
            }

        }
        if(test) cout << "YES" << endl;
    else cout << "NO" << endl;
    }


    return 0;
}
