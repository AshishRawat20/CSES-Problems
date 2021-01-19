#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ll n;
    cin>>n;
    if(n==1){
        cout<<1;
    }
    else if(n<=3){
        cout<<"NO SOLUTION";
    }
    else{
        for(int i=2; i<=n; i+=2){
            cout<<i<<" ";
        }
        for(int i=1; i<=n; i+=2){
            cout<<i<<" ";
        } 
    }
}