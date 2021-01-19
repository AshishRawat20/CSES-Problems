#include<bits/stdc++.h>
typedef long long ll;
#define p 1000000007

using namespace std;

bool issafe(vector<string> &board, int x, int y){
    if(board[x][y] == '*') return false;
    for(int i=x,j=y; i>=0 && j>=0; i--, j--){
        if(board[i][j] == 'q') return false;
    }
    for(int i=x,j=y; i<8 && j>=0; i++, j--){
        if(board[i][j] == 'q') return false;
    }
    for(int i=x,j=y; j>=0; j--){
        if(board[i][j] == 'q') return false;
    }
    return true;
}
void helper(int j, vector<string> &board, ll &count){
    if(j>=8){
        count++;
        return;
    }
    for(int i=0; i<8; i++){
        if(issafe(board, i, j)){
            board[i][j]='q';
            helper(j+1, board, count);
            board[i][j] = '.';
        }
    }
}
int main(){
    vector<string> board(8);
    for(int i=0; i<8; i++){
        cin>>board[i];
    }
    
    ll count = 0;
    helper(0, board, count);
    cout<<count;
}