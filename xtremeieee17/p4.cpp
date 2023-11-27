#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
        cin.ignore();
    for(int i=0; i<n;i++)
    {
        string s;
        map<char,int> mp;
        char maxKey =' ';
        std::getline(std::cin,s);
        for(int j=0; j<s.length();j++)
        {
            int maxi = INT_MIN;
            int asc = int(s[j]);

            if(asc>= 97 && asc <= 103)
            {
                if(mp.count(s[j])==0) mp[s[j]]=1;
                else mp[s[j]]++;
            }
            for(const auto& pair: mp)
            {
                if (pair.second > maxi) {
                    maxi = pair.second;
                    maxKey = pair.first;
                }
            }

        }
        cout << char(int(maxKey )-32)  <<endl;
    }
    return 0;
}
