#include<bits/stdc++.h>
using namespace std;

#define int long long int

main(){
    int n;
    cin>>n;
    vector<int> str(n+1);
    for(int i=1;i<=n;i++) cin>>str[i];
    int res = 0; 
    map<int,int> lastIndex;
  
    int i = 1; 
  
    for (int j = 1; j <= n; j++) { 
        i = max(i, lastIndex[str[j]] + 1); 
        res = max(res, j - i + 1); 
        lastIndex[str[j]] = j;
    }
    cout<<res<<endl;
}