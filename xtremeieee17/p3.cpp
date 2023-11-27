#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    int coun =0;
    string fina= "";
    map<string, int> mp;
    map<int,int> corres;
    cin >> n >> m;
    cin.ignore();
    for(int i=0;i<n;i++)
    {
        string s;
        string s1="";
        std::getline(std::cin,s);
        int j=0;
        while(j<s.length()){
            s1="";
            while(s[j]!=' ' && j<s.length()){
                s1+=s[j];
                j++;
            }
            mp[s1]=i;
            j++;
        }

    }
                cin.ignore();
        for(int k=0;k<m;k++)
        {
            string s;
        string s1,s2="";
        int cnt = 0;
        std::getline(std::cin,s);
        s1 = s.substr(s.find_last_of(' ')+1);
        for(int l=0; l<s1.length();l++)
        {
            s2 += tolower(s1[l]);
        }
        if( mp.count(s2) == 0 ) fina += 'X';
        else
        {
         if(corres.count(mp[s2])== 0 && mp.count(s2)>0 )
         {corres[mp[s2]] = coun;
         coun++;
         }
        fina += char( 65+ corres[mp[s2]]);
        }
        }

        for(int i; i<n; i++)
        {
            char c = char(65+i);
            if(count(fina.begin(), fina.end(), c) == 1){
                fina[fina.find(c)]='X';
                for(int k=i+1; k<n;k++)
                {
                    if(fina[k]<c)
                    {
                        fina[k] = c - 1;
                    }
                }
            }
        }
    cout << fina << endl;



    return 0;
}
