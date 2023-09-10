#include <iostream>

using namespace std;

int main()
{
    int n,k,p=0;
    string s, ch;
    ch = "azertyuiopqsdfghjklmwxcvbn";
    cin >> n >> k;
    for(int i=0; i< n ;i++){
            s+=ch[p];
            p++;
            if(p == k){
                p=0;
            }
    }
    cout << s << endl;
    return 0;
}
