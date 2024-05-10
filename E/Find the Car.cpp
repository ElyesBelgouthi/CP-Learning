#include <bits/stdc++.h>

using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


void solve()
{
        fastIO;

    int t;
    cin >> t;
    while(t--)
    {
       int n,k,q;
       cin >> n >> k >> q;
       int a[k], b[k];
       for(int i=0; i<k;i++)
       {
           cin >> a[i];
       }
       for(int i=0; i<k;i++)
       {
           cin >> b[i];
       }
       for(int i=0; i<q;i++)
       {
           int d;
           cin >> d;
           int sup=k-1,inf=0;

            while(sup>inf){
                int mid=(sup+inf)/2;
                 if (a[mid] < d) inf = mid + 1;
                else {
                    sup = mid;
                }
            }
            if(sup == 0) {
                cout << (d*(b[sup])) / (a[sup])<<  " ";
            }

            else cout << ((d - a[sup - 1])*(b[sup] - b[sup-1])) / (a[sup] - a[inf-1]) + b[inf -1]<<  " ";

       }
       cout << endl;
    }

}

int main()
{
    solve();

    return 0;
}
