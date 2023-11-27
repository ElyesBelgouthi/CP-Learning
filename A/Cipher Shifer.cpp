#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        int j=1,k=0;
        string s;
        string m = "";
        cin >> n;
        cin >> s;
        while(j<n && k<n) {

            if (s[j] == s[k])
            {
                m += s[j];
                k = j++;
            }
                                        j++;

        }
        cout << m << endl;
    }


    return 0;
}
