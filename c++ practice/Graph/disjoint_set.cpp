#include <bits/stdc++.h>
using namespace std;

class disjointSet {
    vector<int> rank, parent,size;
public:
    disjointSet(int n) {
        rank.resize(n + 1, 0);
        parent.resize(n + 1);
        size.resize(n + 1, 1);
        for(int i = 0; i <= n ; i++) {
            parent[i] = i;
        }
    }

    int findUlPar(int node) {
        if(node == parent[node]) {
            return node;
        } 
        return parent[node] = findUlPar(parent[node]);
    }

    void unionFindbyRank(int u, int v) {
        int ulp_u = findUlPar(u);
        int ulp_v = findUlPar(v);

        if(rank[ulp_u] < rank[ulp_v]) {
            parent[ulp_u] = ulp_v;
        } else if(rank[ulp_v < rank[ulp_u]]) {
            parent[ulp_v] = ulp_u;
        } else {
            parent[ulp_u] = ulp_v;
            rank[ulp_v]++;
        }
    }

    void unionFindbySize(int u , int v) {
        int ulp_u = findUlPar(u);
        int ulp_v = findUlPar(v);

        if(ulp_u == ulp_v) return;

        if(size[ulp_u] < size[ulp_v]) {
            parent[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];

        } else {
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }
    }
};

int main() {
    disjointSet ds(7);
    ds.unionFindbySize(1, 2);
    ds.unionFindbySize(2, 3);
    // ds.unionFind(3, 4);
    ds.unionFindbySize(4, 5);
    ds.unionFindbySize(6, 7);
    ds.unionFindbySize(5, 6);

    if(ds.findUlPar(3) == ds.findUlPar(7)) {
        cout << "same" << endl;
    } else {
        cout << "Not Same" << endl;
    }
    ds.unionFindbySize(3, 7);

    if(ds.findUlPar(3) == ds.findUlPar(7)) {
        cout << "same" << endl;
    } else {
        cout << "Not Same" << endl;
    }
}