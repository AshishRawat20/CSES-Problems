#include<bits/stdc++.h>
typedef long long ll;
#define p 1000000007

using namespace std;

ll subsetsum(ll curr, ll &sum, vector<ll> &arr, int i){
    if(i==0) {
        return abs(sum-2*curr);
    }
    return min(subsetsum(curr, sum, arr,i-1), subsetsum(curr+arr[i-1], sum, arr, i-1));
}
int main(){
    ll n;
    cin>>n;
    vector<ll> arr(n);
    ll sum = 0;
    for(int i=0; i<n; i++) {
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<subsetsum(0, sum, arr, n);

}