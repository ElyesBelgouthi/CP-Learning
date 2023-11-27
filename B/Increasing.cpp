#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[100], t,n;
    cin >> t;
    for(int j=0;j<t;j++)
    {
            bool test = true;
        cin >> n;
        for(int i=0; i<n;i++)
        {
            cin >> a[i];
        }
        sort(a,a+n);
        for(int i=0;i<n-1;i++)
        {
            if (a[i] == a[i+1]){
                test = false;
                break;
            }
        }
        if (test) cout << "YES" << endl;
        else cout << "NO" << endl;
    }


    return 0;
}
