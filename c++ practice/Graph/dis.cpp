#include<bits/stdc++.h>
using namespace std;

class disjoint {
    vector<int> rank, parent;
    public:
    disjoint(int n) {
        rank.resize(n + 1, 0);
        parent.resize(n + 1);
        for(int i = 0 ; i <= n; i++) {
            parent[i] = i;
        }
    }
    int findUlPar(int node) {
        if(node == parent[node])
            return node;
        return parent[node] = findUlPar(parent[node]);
    }

    void findUnion(int u, int v) {
        int ulp_u = findUlPar(u);
        int ulp_v = findUlPar(v);

        if (ulp_u == ulp_v) return;
        if(rank[ulp_u] < rank[ulp_v]) {
            parent[ulp_u] = ulp_v;
        } else if(rank[ulp_u] > rank[ulp_v]) {
            parent[ulp_v] = ulp_u;
        } else {
            parent[ulp_u] = ulp_v;
            rank[ulp_v]++;
        }
    }
};