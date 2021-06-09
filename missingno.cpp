#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n,a[50],c=0;
    cin >> n;
    for(int i=0; i<n-1; i++){
        cin >> a[c];
        c++;
    }
    int nsum = (n * (n+1))/2;
    for(int i=0; i<n-1; i++){
        nsum -= a[i] ;
    }
    cout << nsum << endl;
}