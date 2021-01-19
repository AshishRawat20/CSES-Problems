#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ll n,a,b;
    cin>>n;
    vector<pair<ll,ll>> v;
    for(int i=0; i<n; i++){
        cin>>a>>b;
        v.push_back(make_pair(b,a));
    }
    sort(v.begin(), v.end());
    int count =1;
    int prev = v[0].first;
    for(int i=1; i<n; i++){
        if(v[i].second >= prev){
            count++;
            prev = v[i].first;
        }
    }
    cout<<count<<endl;
}