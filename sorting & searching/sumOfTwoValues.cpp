#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ll n, x;
    cin>>n>>x;
    vector<pair<ll,ll>> arr;
    ll d;
    for(int i=0; i<n; i++){
        cin>>d;
        arr.push_back(make_pair(d, i+1));
    }
    
    sort(arr.begin() ,arr.end());
    bool found = false;
    int i=0, j=n-1;
    while(i<j){
        if(arr[i].first+arr[j].first > x){
            j--;
        }
        else if(arr[i].first+arr[j].first < x){
            i++;
        }
        else{
            cout<<arr[i].second<<" "<<arr[j].second<<endl;
            found = true;
            break;
        }
    }
    if(!found){
        cout<<"IMPOSSIBLE"<<endl;
    }
}