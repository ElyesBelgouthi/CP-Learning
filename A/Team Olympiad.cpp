#include <iostream>

using namespace std;

int main()
{
    int t[5000];
    int n, p=0,s=0,m=0,least;
    int x=0,y=0,z=0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> t[i];
        if(t[i]==1){
            p++;
        } else if (t[i]==2) {
            m++;
        } else {
            s++;
        }
    }
    least = min(min(p,m),s);
    cout << least << endl;
    while(least>0){

        while(t[x]!=1){
            x++;
        }
        while(t[y]!=2){
            y++;
        }
        while(t[z]!=3){
            z++;
        }
        x++;
        y++;
        z++;
        cout << x << ' ' << y <<  ' ' << z << endl;
        least--;
    }
    return 0;

}
