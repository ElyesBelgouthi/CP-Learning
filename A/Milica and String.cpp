#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,k;
    string s;
    cin >> t;
    for(int j=0;j<t;j++)
    {
        cin >> n >> k;
        cin >> s;
        int lastIndexB=-1, numB= 0,numA= 0,lastIndexA=-1;
        for(int i=n-1; i>=0; i--)
        {
            if(s[i] == 'B')
            {
                numB++;
                if(numB == k+1) lastIndexB = i;
            } else
            {
                numA++;
                if(numA == k+1) lastIndexA = i;
            }
        }
        if(numB == k)
        {
            cout << 0 << endl;
        } else if(numB < k)
        {
            cout << 1 << endl;
            cout << lastIndexA + 1 << ' '<<'B' << endl;
        } else
        {
            cout << 1 << endl;
            cout << lastIndexB + 1 << ' ' << 'A' << endl;
        }
    }



    return 0;
}
