#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ll n;
    cin>>n;
    int sum = n*(n+1)/2;
    if(sum%2){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        if(n%2){
            cout<<(n+1)/2<<endl;
            int i;
            for(i=0; i<(n+1)/4;i++){
                cout<<i+1<<" "<<n-1-i<<" ";
            }
            cout<<endl<<n/2<<endl;
            for(; i<n/2; i++){
                cout<<i+1<<" "<<n-1-i<<" ";
            }
            cout<<n<<endl;
        }
        else{
            cout<<n/2<<endl;
            int i;
            for(i=0; i<n/4;i++){
                cout<<i+1<<" "<<n-i<<" ";
            }
            cout<<endl<<n/2<<endl;
            for(; i<n/2; i++){
                cout<<i+1<<" "<<n-i<<" ";
            }
            cout<<endl;
        }
    }
}