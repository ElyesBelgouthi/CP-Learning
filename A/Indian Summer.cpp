#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,num=0;
    map<string,int> mp;
    vector<string> v,w;
    cin >> n;
    cin.ignore();
    for(int i=0;i<n;i++)
    {
        string s;
        std::getline(std::cin,s);
        if(mp.count(s) == 0 )
        {
            num++;
            mp[s] = 1;
        }
    }


    cout << num;
    return 0;
}
