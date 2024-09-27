#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    void bfs(int row, int col, vector<vector<int>> &vis, vector<vector<int>> &grid) {
        vis[row][col] = 1;
        int n = grid.size();
        queue<pair<int,int>> q;
        q.push({row, col});
        while (!q.empty()) {
            int nrow = q.front().first;
            int ncol = q.front().second;
            q.pop();
            vector<pair<int,int>> direction = {{-1, 0}, {1, 0}, {0, -1}, {0, 1},{-1,-1},{1,1}};
            for (const auto &dir : direction) {
                int delrow = nrow + dir.first;
                int delcol = ncol + dir.second;
                if (delrow >= 0 && delrow < n && delcol >= 0 && delcol < n && !vis[delrow][delcol] && grid[delrow][delcol] == 1) {
                    vis[delrow][delcol] = 1;
                    q.push({delrow, delcol});
                }
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<vector<int>> vis(n, vector<int>(n, 0));
        int cn = 0;
        for (int row = 0; row < n; row++) {
            for (int col = 0; col < n; col++) {
                if (!vis[row][col] && isConnected[row][col] == 1) {
                    cn++;
                    bfs(row, col, vis, isConnected);
                }
            }
        }
        return cn;
    }
};

int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<int>> v(3,vector<int>(3,0));
    v = {{1,1,0},
        {1,1,0},
        {0,0,1}};
    vector<int> adj[3];
    int vis[3];

    for(int row= 0; row < 3; row++){
        for(int col = 0; col < 3; col++){
            adj[row].push_back(col);
            adj[col].push_back(row);
        }
    }
    for(int i = 0; i < 3; i++){
        
    }
}
