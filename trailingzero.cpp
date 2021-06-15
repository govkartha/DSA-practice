#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long int n,c=0,s;
    cin >> n;
    while(s>5){
        s = n/5;
        c += s;
        n = s;
    }
    cout << c << endl;
}