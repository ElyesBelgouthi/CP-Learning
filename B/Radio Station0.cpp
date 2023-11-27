#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<string,string> ma;
    int n,m;
    cin >> n >> m;
    for(int i=0; i<n; i++)
    {
        string v,w;
        cin >> v >> w;
        ma[w] = v;
    }
    for(int i=0;i<m;i++)
    {
        string v,w,s;
        cin >> v >> w;
        cout << v << " " << w << " #" << ma[w.substr(0,w.length() - 1)] << endl;
    }
    return 0;
}
