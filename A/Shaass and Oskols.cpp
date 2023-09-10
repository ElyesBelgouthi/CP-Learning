#include <iostream>

using namespace std;

int main(){
    int n,m;
    int a[100];
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    cin >> m;
    for(int i=0; i<m; i++){
        int x,y;
        cin >> x >> y;
        if(x!=1){
            a[x-2]+= y -1 ;
        }
        if(x!=n){
            a[x]+= a[x-1] - y;
        }
        a[x-1] =0;
    }
    for(int i=0; i<n; i++){
        cout << a[i] << endl;
    }


    return 0;
}
