//Subsets using bitmasking

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,a[100];
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> a[i];
    for(int i=0; i<pow(2,n); i++){
        for(int j=0; j<n; j++)
            if((i & (1<<j)) != 0)
                cout << a[j] << " ";
        cout << endl;
    }
}