#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

int expp(long long int base,long long int pow){
    long long int result = 1;
    while(pow > 0){
        if(pow % 2 == 1)
            result = (result*base)%mod;
        pow /= 2;
        base = (base*base)%mod;
    }
    return result;
}


int main(){
    long long int n;
    cin >> n;
    cout << expp(2,n) << endl;
}