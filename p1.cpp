#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int k=0; k<t; k++){
        int a[60],n;
        cin >> n;
        for(int i=0; i<n; i++)
            cin >> a[i];
        int rec=0, m=-1;
        for(int i=0; i<n; i++){
            if(i==n-1 && a[i]>m)
                rec++;
            else if(i==0 && a[0]>a[1])
                rec++;
            else if(a[i]>m && a[i]>a[i+1])
                rec++;
            m = max(m,a[i]);
        }
        cout<<rec<<endl;
    }
    
    return 0;
}
   