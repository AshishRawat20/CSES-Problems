#include<bits/stdc++.h>
typedef long long ll;
#define MOD 1000000007

using namespace std;

set<string> perms;

void permutations(string s, int i){
    if(i==s.size()-1)  {
        perms.insert(s);
        return;
    }
    for(int j=i; j<s.size(); j++){
        if(s[i]!=s[j] || i==j){
            swap(s[i], s[j]);
            permutations(s, i+1);
            swap(s[i], s[j]);
        }
    }
}
int main(){
    string s;
    cin>>s;
    permutations(s, 0);
    cout<<perms.size()<<endl;
    for(auto e: perms){
        cout<<e<<endl;
    }
}