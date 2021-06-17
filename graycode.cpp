#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long int n;
    string bin;
    cin >> n;
    for(int i=0; i<1<<n; i++){
        bin = bitset<32>(i ^ (i >> 1)).to_string();
        cout << bin.substr(bin.length()-n) << endl;
    }
}