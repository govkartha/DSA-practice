#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n,a[50],c=0;
    cin >> n;
    if(n==1) cout << '1' << endl;
    else if(n==2 || n==3) cout << "NO SOLUTION" << endl;
    else{
        for(int i=1; i<=n; i+=2)
            cout << i << " ";
        for(int j=2; j<=n-1; j+=2)
            cout << j << " ";
    }
}