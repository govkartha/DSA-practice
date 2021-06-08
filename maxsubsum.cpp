#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,a[50];
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> a[i];
    int s=0, m=INT_MIN;
    for(int i=0; i<n; i++){
        s += a[i];
        m = max(m,s);
        if(a[i]<0)
            s = 0;
    }
    cout << m << endl;
    
    return 0;
}