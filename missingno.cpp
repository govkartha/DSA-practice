#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int c=0;
    long long int n,a[500000];
    cin >> n;
    for(int i=0; i<n-1; i++){
        cin >> a[c];
        c++;
    }
    long long int nsum = (n * (n+1))/2;
    for(int i=0; i<n-1; i++){
        nsum -= a[i] ;
    }
    cout << nsum << endl;
}
