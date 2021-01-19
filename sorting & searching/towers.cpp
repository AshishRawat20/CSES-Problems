#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

ll search(vector<ll> &arr,ll data, ll size){
    ll low = 0, high =size-1;
    while(low < high){
        ll mid = (low+high)/2;
        if(arr[mid] <= data){
            low = mid+1;
        }
        else{
            high = mid;
        }
    }
    return low;
}
int main(){
    ll n;
    cin>>n;
    vector<ll> arr(n);
    for(ll i=0;i<n; i++){
        cin>>arr[i];
    }
    vector<ll> tail(n);
    ll length = 1;
    tail[0] = arr[0];
    for(ll i=1; i<n; i++){
        if(arr[i]<tail[0]){
            tail[0] = arr[i];
        }
        else if(arr[i] >= tail[length-1]){
            tail[length++] = arr[i];
        }
        else{
            ll ind = search(tail,arr[i], length);
            tail[ind] = arr[i];
        }
    }

    cout<<length<<endl;
}