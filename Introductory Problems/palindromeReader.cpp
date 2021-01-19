#include<bits/stdc++.h>
typedef long long ll;
#define p 1000000007

using namespace std;

int main(){
    string s;
    cin>>s;
    vector<int> count(26, 0);
    for(auto e: s){
        count[e-'A']++;
    }
    char oddchar;
    int n = s.length();    
    int oddcount = 0;
    for(int i=0; i<26; i++){
        if(count[i]%2) oddcount++,oddchar = i+'A';
    }
    if(oddcount > 1 || (oddcount==1 && n%2==0)){
        cout<<"NO SOLUTION";
        return 0;
    }
    string first, second;
    for(int i=0; i<26; i++){
        string temp(count[i]/2, i+'A');
        first = first + temp;
        second = temp + second;
    }
    if(oddcount){
        cout<<first + oddchar + second;
    }
    else{
        cout<<first + second;
    }
    cout<<endl;
}
