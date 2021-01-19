#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ll n,a,b;
    cin>>n;
    multiset<pair<ll,char>> m;
    while(n--){
        cin>>a>>b;
        m.insert({a, 'a'});
        m.insert({b, 'd'});
    }
    int ans = -1;
    int count = 0;
    for(auto it = m.begin(); it!=m.end(); it++){
        if(it->second == 'a'){
            count++;
        }
        else{
            count--;
        }
        ans = max(ans, count);
    }
    cout<<ans<<endl;
}