#include <iostream>

using namespace std;

int main()
{
    int n,t,k,d;
    cin >> n >> t >> k >> d;
    if((((t+d)/t)*k) < n){
        cout << "YES"<< endl;
    } else {
        cout << "NO"<< endl;
    }

return 0;
}
