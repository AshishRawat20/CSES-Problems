#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ll n;
    cin>>n;
    vector<ll> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    ll count = 0;
    for(int i=1; i<n; i++){
        if(arr[i]<arr[i-1]){
            count+=arr[i-1]-arr[i];
            arr[i] = arr[i-1];
        }
    }
    cout<<count;
}