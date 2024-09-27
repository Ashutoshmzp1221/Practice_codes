#include<bits/stdc++.h>
using namespace std;

void dfs(int node, vector<int> adj[],int vis[], vector<int>&df){
    vis[node] = 1;
    df.push_back(node);
    for(auto it: adj[node]){
        if(!vis[it]){
            dfs(it,adj,vis,df);
        }
    }
}

vector<int>dfsofGraph(int v, vector<int> adj[]){
    int vis[v] = {0};
    int start = 0;
    vector<int> df;
    dfs(start, adj, vis, df);
    return df;
}

int main(){

}


