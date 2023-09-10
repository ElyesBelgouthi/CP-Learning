#include <iostream>
#include <cstring>
#include <unordered_set>

using namespace std;

int main()
{
    int o;
    string s;
    unordered_set<char> chSet;
    getline(cin,s);
    for(char c: s){
        if((c == '{') || (c== '}') || (c==' ') || (c==',')){
            continue;
        }else {
            chSet.insert(c);
        }
    }

cout << chSet.size();
}
