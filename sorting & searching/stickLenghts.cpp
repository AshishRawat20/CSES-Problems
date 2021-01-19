#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ll n;
    cin>>n;
    vector<ll> arr(n);
    ll sum =0;
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end());
    ll med = arr[n/2];
    for(int i=0; i<n; i++){
        sum+=abs(arr[i]-med);
        
    }
    cout<<sum<<endl;
}