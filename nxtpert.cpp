//Find next permutation of a given string

#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    if(next_permutation(s.begin(), s.end()))
        cout << s << endl;
    else{
        sort(s.begin(), s.end());
        cout << s << endl;
    }
}