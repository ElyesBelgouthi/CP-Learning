
#include <iostream>

using namespace std;

int main(){
    int n, b, d;
    int waste =0;
    int number= 0;
    cin >> n >> b >> d;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        if(a> b){
            continue;
        }
        waste+=a;
        if(waste > d){
            waste=0;
            number++;
        }

    }

    cout << number << endl;
    return 0;
}
