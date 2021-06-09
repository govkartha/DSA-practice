#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long int t,n;
    cin >> n;
    long long int nsum = (n * (n+1))/2;
    long long int s = 0;
    for(int i=0; i<n-1; i++){
        cin >> t;
        s += t;
    }
    cout << nsum-s << endl;
}
