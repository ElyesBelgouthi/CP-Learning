#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main()
{
    ll a, b,num =0,temp;
    cin >> a >> b;

    while(b !=0)
    {
        num += a/b;
        temp = b;
        b  = a%b;
        a = temp;
    }
    cout << num;


    return 0;
}
