#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    string pin;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        int time=4,k=1;
        cin >> pin;
        if(pin[0] == '0')
        {
            time += 9;
        } else
        {
            time += pin[0] - '1';
        }
        while(k<4)
        {
            if(pin[k] == '0' && pin[k-1] != '0')
            {
                time+= '9' - pin[k-1];
                time++;
            } else if(pin[k-1]=='0'&& pin[k] != '0') {
                time+= '9' - pin[k];
                time++;
            }
            else {
                time += abs(pin[k]-pin[k-1]);
            }
            k++;
        }
        cout << time << endl;
    }


    return 0;
}
