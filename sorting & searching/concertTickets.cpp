#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ll n,m;
    cin>>n>>m;
    multiset<ll, greater<int>> tickets;
    ll ticket;
    for(int i=0;i<n;i++){
        cin>>ticket;
        tickets.insert(ticket);
    }
    ll curr;
    for(int i=0;i<m;i++) {
        cin>>curr;
        auto it = tickets.lower_bound(curr);
        if(it ==tickets.end()){
            cout<<-1<<endl;
        }
        else{
            cout<<*it<<endl;
            tickets.erase(it);
        }
    }

}