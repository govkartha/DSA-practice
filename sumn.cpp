#include <bits/stdc++.h>
using namespace std;

int sumn(int n){
    if(n == 0)
        return 0;
    else
        return n + sumn(n-1);
}

int main(){
    int n;
    cin >> n;
    int s = sumn(n);
    cout << s << endl;
    return 0;
}