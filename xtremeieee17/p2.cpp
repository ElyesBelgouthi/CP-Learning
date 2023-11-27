#include <bits/stdc++.h>
typedef long long ll;

using namespace std;


int main()
{
    ll a,b;
    cin >> a;
    cin >> b;
    ll x = 0, s = 0;
    set<ll> st;
    st.insert(1);
    st.insert(7);
    for(ll i = 10; i <= 1296; i++){
        string y = to_string(i);

    while(y.length()>1){
    x = 0;
    for(int i=0;i<y.length();i++){
        x+=(y[i]-'0')*(y[i]-'0');
    }
    y = to_string(x);
    }
      if(y =="7" || y=="1"){
        st.insert(i);
    }

    }

    for(ll i = a; i <= b; i++){
        string y = to_string(i);
    for(int i=0;i<y.length();i++){
        x+=(y[i]-'0')*(y[i]-'0');
    }
    if(st.find(x)!=st.end()){
        s++;
        cout << x << endl;
    }
    x=0;
    }


    cout << s << endl;
}
