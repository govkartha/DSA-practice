#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string s;
    cin >> s;
    int l,m=1;
    for(int i=0; i!=s.size(); i++){
        if(s[i] == s[i+1]){
            int temp = i;
            while(s[i] == s[i+1])
                i++;
            l = i-temp+1;
            m = max(m,l);
        }
    }
    cout << m << endl;
}