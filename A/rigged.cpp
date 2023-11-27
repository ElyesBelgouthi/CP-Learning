#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    int s[100],e[100];
    cin >> t;
    for(int i=0; i<t; i++)
    {
        int n,res=0;
        cin >> n;
        for(int j=0; j<n; j++)
        {
            cin >> s[j] >> e[j];
        }
        for(int k=1; k<n; k++)
        {
            if((e[0] <= e[k]) && (s[0]<= s[k])){
                    res = -1;
                    break;
                } else {
                res = s[0];
                }

        }
        cout << res << endl;
    }
    return 0;
}
