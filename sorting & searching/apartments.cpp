#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll> arr(n);
    for(int i=0; i<n; i++) cin>>arr[i];
    vector<ll> app(m);
    for(int i=0; i<m; i++) cin>>app[i];
    sort(arr.begin(), arr.end());
    sort(app.begin(), app.end());
    int i=0, j=0;
    int count = 0;
    while(i<n && j<m){
        if(arr[i]+k>=app[j] && app[j] >= arr[i]-k){
            count++;
            i++;
            j++;
        }
        else if(app[j] < arr[i]-k){
            j++;
        }
        else{
            i++;
        }
    }
    cout<<count<<endl;
}