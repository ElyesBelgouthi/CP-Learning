#include <iostream>

using namespace std;

int main()
{
    	ios_base::sync_with_stdio(false);
    string x,y;
    while(cin>>x)
    {
        cin >> y;
        int l1 = x.length(), l2= y.length();
        string s(l1+l2,'0');
        for(int i=l1 - 1;i>=0;i-- )
        {
            int c=0;
            for(int j=l2 - 1;j>=0;j--)
            {
                int p = (x[i] - '0') * (y[j] - '0') + (s[ i + j] - '0') +c;
                c = p / 10;
                s[i+j +1] += p % 10;
            }
        }
        int pos = 0;
        while(s[pos]=='0')
        {
            pos++;
        }


        cout << s.substr(pos) << endl;
    }

    return 0;
}
