#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ll n,x;
    cin>>n;
    ll sum = 0, ans = INT_MIN;
    ll maxEl = INT_MIN;
    for(int i=0; i<n; i++){
        cin>>x;
        maxEl = max(maxEl, x);
        sum+=x;
        ans = max(ans, sum);
        if(sum<0){
            sum = 0;
        }
    }
    cout<<max(ans, maxEl)<<endl;
}