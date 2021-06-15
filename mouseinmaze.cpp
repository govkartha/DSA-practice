#include <bits/stdc++.h>
using namespace std;

bool issafe(int** a, int x, int y, int n){
    if(a[x][y] == 1 && x<=n-1 && y<=n-1)
        return true;
    return false;
}

bool mim(int** a, int** s, int x, int y, int n){
    if (x==n-1 && y==n-1){
        s[x][y] = 1;
        return true;
    }
    if(issafe(a,x,y,n)){
        s[x][y] = 1;
        if(mim(a,s,x+1,y,n))
            return true;
        if(mim(a,s,x,y+1,n))
            return true;
        s[x][y] = 0;
        return false;
    }
    return false;   
}
 
int main(){
    int n;
    cin >> n;
    int** a = new int* [n];
    for(int i=0; i<n; i++){
        a[i] = new int [n];
        for(int j=0; j<n; j++)
            cin >> a[i][j];
    }
    int** s = new int* [n];
    for(int i=0; i<n; i++){
        s[i] = new int [n];
        for(int j=0; j<n; j++)
            s[i][j] = 0;
    }
    cout << "-------------------------" << endl;
    if(mim(a,s,0,0,n)){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++)
                cout << s[i][j] << " ";
            cout << endl;
        }
    }
    else
        cout << "Not possible";

    return 0;
   
}




// 5
// 1 0 0 0 0
// 1 1 0 1 0
// 0 1 1 1 0
// 0 0 0 1 0
// 1 1 1 1 1
