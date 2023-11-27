#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n=-1;
    while(n!=0)
    {
        cin >> n;
        if(sqrt(n)* sqrt(n) == n)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

    }


}
