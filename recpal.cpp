#include <bits/stdc++.h>
using namespace std;

void recpal(string s, int beg, int end){
    if(beg==end)
        cout << "True";
    if(s[beg] != s[end]){
        cout << "False";
        return;
    }
    if(beg<end+1)
        recpal(s,beg+1,end-1);
}

int main(){
    string s;
    cin >> s;
    if(s.length()==0)
        cout << "True";
    recpal(s,0,s.length()-1);
}