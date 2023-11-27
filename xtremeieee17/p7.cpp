#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    map<string, bool> mp;
    cin >> n;
    cin.ignore();
    for (int j = 0; j < n; j++) {
        int i = 0;
        vector<string> pss;
        string s, s1;
        std::getline(std::cin, s);
        while (i < s.length()) {
            s1 = "";
            while (i < s.length() && s[i] != ' ') {
                s1 += s[i];
                i++;
            }
            pss.push_back(s1);
            while (i < s.length() && s[i] == ' ') {
                i++;
            }
        }
        if(pss[1] == "->")
        {
            mp[pss[2]] = false;
            if(mp.count(pss[0])==0 ) mp[pss[0]] = true;
        } else
        {
            if(mp.count(pss[0])==0 && mp.count(pss[2])!=0) mp[pss[0]] = false;
            else if(mp.count(pss[2])==0 && mp.count(pss[0])!=0) mp[pss[2]] = false;
            else
            {
                mp[pss[0]] = true;
                mp[pss[2]] = true;
            }
        }
    }
    vector<string> keys;
    for(const auto& pair: mp)
    {
        if(pair.second == true) keys.push_back(pair.first);
    }

    sort(keys.begin(), keys.end());
    for(int i=0; i<keys.size() ; i++)
    {
        cout << keys[i] << endl;
    }
    return 0;
}
