#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ll n;
    cin>>n;
    while(n){
        cout<<n<<" ";
        if(n==1) break;
        if(n%2){
            n = n*3+1;
        }
        else{
            n/=2;
        }
    }
}