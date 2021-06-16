#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long int s,b,n,a[50],c=0;
    cin >> n;
    for (int i=0; i<n; i++)
        cin >> a[i];
    for(int i=0; i<32; i++){
        b = (1<<i);
        s = 0;
        for(int j=0; j<n; j++)
            if((a[j]&b) != 0)
                s++;
        if(s%3 == 1)
            c |= b;
    }
    cout << c << endl;
    
}