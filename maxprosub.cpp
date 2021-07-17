//Maximum subarray product

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,a[50];
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> a[i];
    int m=1, mx=INT_MIN;
    for(int i=0; i<n; i++){
        m *= a[i];
        mx = max(mx,m);
    }
    cout << mx << endl;
}