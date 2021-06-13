#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long int n,k,s=0;
    cin >> n;
    for(k=1; k<n+1; k++){
        s = ((pow(k,4)-pow(k,2))/2) - (4 * (k-1)*(k-2));
        cout << s << endl;
    }
    
    return 0;
}