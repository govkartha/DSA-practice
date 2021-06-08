#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int k=0; k<t; k++){
        int n, a[50], m=0, count=2;
        cin >> n;
        for(int i=0; i<n; i++)
            cin>>a[i];
        int d = a[1] - a[0];
        for(int i=0; i<n-1; i++){
            if ((a[i+1]-a[i]) == d){
                count++;
            }
            else{
                count = 2;
                d = a[i+1]-a[i];
            }
        m = max(m,count);   
        }
        cout<<m<<endl;
    }
    
    return 0;
}