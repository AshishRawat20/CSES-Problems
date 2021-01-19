#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ll n;
    cin>>n;
    vector<ll> arr(n);
    for(int i=0; i<n; i++) cin>>arr[i];
    sort(arr.begin(), arr.end());
    int count =0 ;
    for(int i=0; i<n; i++){
        int j = i+1;
        count++;
        while(j<n && arr[j]==arr[j-1])j++;
        i = j-1;
    }
    cout<<count<<endl;
}