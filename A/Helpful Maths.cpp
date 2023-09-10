#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    if(s.length()<2){
        cout << s << endl;
    return 0;
    }

    for(int i=0; i< s.length()-2; i+=2){
        for(int j=i+2; j< s.length(); j+=2){
            if(s[i]>s[j]){
                char c;
                c=s[i];
                s[i]=s[j];
                s[j]=c;
            }
        }
    }
    cout << s << endl;
    return 0;
}
