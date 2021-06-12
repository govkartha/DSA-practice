#include <bits/stdc++.h>
using namespace std;

string recpi(string s){
    if(s.length()==0 || s.length()==1) //base condition
        return s;
    if(s[0]=='p' && s[1]=='i')
        return "3.14" + recpi(s.substr(2));
    else
        return s[0] + recpi(s.substr(1));
}

int main(){
    string s;
    cin >> s;
    cout << recpi(s) << endl;

    return 0;
}