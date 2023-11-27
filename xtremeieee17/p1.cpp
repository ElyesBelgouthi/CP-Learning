#include <bits/stdc++.h>
using namespace std;


int main() {
	  int n;
	  cin >> n;
    for(int j=0; j<n;j++)
    {
        string s,ssss= "";
        int value;
		bool test = false;
        cin >> value;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        getline(cin,s);
        int i=0;
         string s1 ="";
    while(i< s.length()){
         s1 ="";
         while(s[i]!=' ' && i< s.length()){
            s1+=s[i];
            i++;
         }
         if(s1=="the"){
            test = true;
            break;
         }else{
              i++;
         }

    }
    if(s1=="the"){
            test = true;
         }

        if(test)
        {
            for(int k=0 ;k<s.length();k++)
            {
                if(s[k] == ' ')
                {
                    ssss+= ' ';
                    continue;
                }
                int vv;
                vv= int(s[k]) - value ;
                if(vv < 97 ) vv+= 26;
                ssss+= char(vv);
            }
        }
        else
        {
            for(int k=0 ;k<s.length();k++)
            {
                if(s[k] == ' ')
                {
                    ssss+= ' ';
                    continue;
                }
                int vv;
                vv= int(s[k]) + value ;
                if(vv > 122 ) vv-= 26;
                ssss+= char(vv);
            }
        }

        cout << ssss << endl;
    }
}
