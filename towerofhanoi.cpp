#include <bits/stdc++.h>
using namespace std;
#define lli long long int
 
void tower(lli n, lli from, lli mid, lli to){
    lli left = from;
    lli middle = mid;
    lli right = to;
    if(n>0){
        tower(n-1,left,right,middle);
        cout << from << " " << to << endl;
        tower(n-1,mid,left,right);
    }
}

int main(){
    lli n;
    cin >> n;
    cout << pow(2,n)-1 << endl;
    tower(n,1,2,3);
}