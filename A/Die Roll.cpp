#include <iostream>

using namespace std;

int main(){

int y,w,m;
int a = 6;
cin >> y >> w;
m=7- max(y,w);
if(m == 6){
    a = 1;
    m = 1;
}
if(m%2 == 0){
    a = a/2;
    m = m/2;
}
if(m%3 == 0){
    a = a/3;
    m = m/3;
}


cout << m << '/' << a << endl;

return 0;

}
