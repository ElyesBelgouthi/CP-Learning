#include <iostream>

using namespace std;

int main()
{
    int n, num=0;
    long long x;
    cin >> n >> x;
    for(int i=0; i<n ;i++)
    {
        char c;
        long long m;
        cin >> c >> m;
        if(c=='+'){
            x += m;
        } else {
            if(x-m < 0){
                num++;
            } else {
                x-=m;
            }
        }
    }
    cout << x << ' ' << num;
    return 0;

}
