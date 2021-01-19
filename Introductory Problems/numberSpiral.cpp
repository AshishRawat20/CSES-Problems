#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll x,y;
        cin>>x>>y;
        ll ans;
        ll n = max(x,y);
        if(n%2){
            if(y == n){
                ans = n*n-x+1;
            }
            else{
                ans = (n-1)*(n-1)+y;
            }
        }
        else{
            if(y == n){
                ans = (n-1)*(n-1)+x;
            }
            else{
                ans = n*n-y+1;
            }
        }
        cout<<ans<<endl;
    }
}