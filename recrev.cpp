#include <bits/stdc++.h>
using namespace std;
 

void reverse(string s){
    if(str.length() == 0)
        return;
    reverse(s.substr(1));
    cout << s[0];
}
 
int main(){
    string a;
    cin >> a;
    reverse(a);
    return 0;
}