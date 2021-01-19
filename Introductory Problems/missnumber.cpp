#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ll n;
    cin>>n;
    vector<ll> arr(n-1);
    for(int i=0; i<n-1; i++){
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end());
    int i;
    for(i=0; i<n-1; i++){
        if(arr[i]!=i+1){
            cout<<i+1;
            break;
        }
    }
    if(i==n-1) cout<<n;
}