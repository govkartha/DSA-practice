#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n, a[50], count=0, flag=0;
    cin >> n;
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=1; i<n-1; i++){
        while(a[i]<a[i-1]){
            a[i]++;
            count++;
        }
        while(a[i]>a[i+1]){
            a[i+1]++;
            count++;
        }
    }
    cout << count << endl;
}