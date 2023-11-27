#include <bits/stdc++.h>


using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        string s;
        cin >> s;
        stack<char> st;
        st.push(s[0]);
        for(int j=1;j<s.length();j++)
        {
            if(!st.empty() && st.top()== 'A' && s[j] == 'B')
            {
                st.pop();
            }
            else if (!st.empty() && st.top()== 'B' && s[j] == 'B')
            {
                st.pop();
            } else
                {
                    st.push(s[j]);
                }
        }
        cout << st.size() << endl;
    }


    return 0;
}
