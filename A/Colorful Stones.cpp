#include <iostream>

using namespace std;

int main(){
string s,t;
int j = 0;
cin >> s;
cin >> t;



for(int i=0; i< t.length(); i++){
    if((t[i] == s[j]) && (j < s.length())){
        j++;
    }
}
cout << j+1 << endl;
return 1;
}
