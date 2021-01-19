#include<bits/stdc++.h>
typedef long long ll;
#define p 1000000007

using namespace std;


string s;
int n;
int reserved[49];
bool vis[7][7];

void helper(int i, int x, int y, int &cnt){
    if(x==6 && y==0){
        if(i==n)
            cnt++;
        return;
    }
    if (((x + 1 == n || (vis[x - 1][y] && vis[x + 1][y])) && y - 1 >= 0 && y + 1 < n && !vis[x][y - 1] && !vis[x][y + 1]) ||
        ((y + 1 == n || (vis[x][y - 1] && vis[x][y + 1])) && x - 1 >= 0 && x + 1 < n && !vis[x - 1][y] && !vis[x + 1][y]) ||
        ((x == 0 || (vis[x + 1][y] && vis[x - 1][y])) && y - 1 >= 0 && y + 1 < n && !vis[x][y - 1] && !vis[x][y + 1]) ||
        ((y == 0 || (vis[x][y + 1] && vis[x][y - 1])) && x - 1 >= 0 && x + 1 < n && !vis[x - 1][y] && !vis[x + 1][y])){
             return;
        }

    vis[x][y] = true;
    if(reserved[i]!=-1){
        switch (reserved[i])
        {
        case 0:{
            if(x-1>=0 && !vis[x-1][y]) {
                helper(i+1, x-1, y,cnt);
            }
            break;
        }
        case 1:{
            if(y+1<7 && !vis[x][y+1]) {
                helper(i+1, x, y+1,cnt);
            }
            
            break;
        }
        case 2:{
            if(x+1<7 && !vis[x+1][y]) {
                helper(i+1, x+1, y,cnt);
            }
            break;
        }
        case 3:{
            if(y-1>=0 && !vis[x][y-1]) {
                helper(i+1, x, y-1,cnt);
            }
            break;
        }
        
        }
        vis[x][y] = false;
        return;
    }

    if(x+1<7 && !vis[x+1][y]) {
        helper(i+1, x+1, y,cnt);
    }
    if(y+1<7 && !vis[x][y+1]) {
        helper(i+1, x, y+1,cnt);
    }
    if(x-1>=0 && !vis[x-1][y]) {
        helper(i+1, x-1, y,cnt);
    }
    
    if(y-1>=0 && !vis[x][y-1]) {
        helper(i+1, x, y-1,cnt);
    }
    vis[x][y] = false;
    return;
}
int main(){
    cin>>s;
    n = s.length();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '?')
            reserved[i] = -1;
        else if (s[i] == 'U')
            reserved[i] = 0;
        else if (s[i] == 'R')
            reserved[i] = 1;
        else if (s[i] == 'D')
            reserved[i] = 2;
        else if (s[i] == 'L')
            reserved[i] = 3;
    }
    int cnt = 0;
    memset(vis, false, sizeof(vis));
    helper(0, 0, 0, cnt);
    cout<<cnt<<endl;
}