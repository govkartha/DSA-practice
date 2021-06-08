#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int k=0; k<t; k++){
        int n, a[50];
        cin >> n;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        int min = -1; 
        set<int> s;   
        for(int i=n-1; i>=0; i--){
            if (s.find(a[i]) != s.end())  
                min = i; 
            else
                s.insert(a[i]);  
        }
        cout << a[min] << endl;
            
        // for(int i=0; i<n; i++){
        //     if(count(a, a+n, a[i]) > 1){
        //         cout << a[i] << endl;
        //         break;
        //     }
        // }

        // int m = 0, flag=0;
        // for(int i=0; i<n; i++){
        //     for(int j=i+1; j<n; j++){
        //         if(a[i] == a[j]){
        //             cout<<a[i]<<endl;
        //             flag=1;
        //         }
        //     }
        //     if(flag==1)
        //     break;
        // }
    }
    
    return 0;
}