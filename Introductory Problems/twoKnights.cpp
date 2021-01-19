#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ll k;
    cin>>k;
    for(ll n=1; n<=k; n++){
        cout << n * n * (n * n - 1) / 2 - 4 * (n - 1) * (n - 2) << endl;
    }
}