#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ll n, x;
    cin>>n>>x;
    vector<ll> arr(n);
    for(int i=0; i<n; i++) cin>>arr[i];
    sort(arr.begin(), arr.end());
    int i=0, j=n-1;
    int count = 0;
    while(i<j){
        if(arr[i]+arr[j] <= x){
            count++;
            i++;
            j--;
        }
        else {
            count++;
            j--;
        }
    }
    if(i==j) count++;
    cout<<count<<endl;
}