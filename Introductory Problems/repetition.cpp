#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    string s;
    cin>>s;
    ll res=-1, curr = 1;
    char ch = s[0];
    for(int i=1; i<s.length(); i++){
        if(s[i] == s[i-1]){
            curr++;
        }
        else{
            res = max(res, curr);
            curr = 1;
            ch = s[i];
        }
    }
    res = max(res, curr);
    cout<<res;
}