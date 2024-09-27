#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> m >> n;
    // adjecency list methode
    int adj[n+1][m+1];
    for(int i = 0; i < m; i++){
        int u,v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }

    //  adjecency list mthode space complexity is O(2E)
    vector<int> ad[n+1];
    for(int i = 0; i < m; i++){
        int u , v;
        cin >> u >> v;
        ad[u].push_back(v);
        ad[v].push_back(u);
    }
}