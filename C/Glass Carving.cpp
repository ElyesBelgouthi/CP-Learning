#include <bits/stdc++.h>

using namespace std;

int main()
{
   int w, h, n;
   cin >> w >> h >> n;
   for(int i=0; i<n;i++)
   {
       char c;
       int z,aux;
       cin >> c >> z;
       if(c == 'H')
       {
           aux = max(h-z,z)*w;
           h= max(h-z,z);

       } else
       {
           aux = max(w-z,z)*h;
           w= max(w-z,z);
       }
       cout << aux << endl;
   }



    return 0;
}
