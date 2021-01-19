#include<bits/stdc++.h>
typedef long long ll;
#define p 1000000007

using namespace std;

int main(){
    ll n;
    cin>>n;
    ll count = 0;
    ll x=5;
    while(n/x){
        count+=n/x;
        x*=5;
    }
    cout<<count<<endl;
}