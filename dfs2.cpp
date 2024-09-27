#include<bits/stdc++.h>
using namespace std;

class graph
{
    public:
    map<int , bool> visited;
    map<int, list<int>> mp;
    void addEdge(int v, int w);
    void DFS(int v);
};

void graph :: addEdge(int v, int w)
{
    mp[v].push_back(w);
}

void graph :: DFS(int v)
{
    visited[v] = true;
    cout << v << " ";
    list<int> :: iterator it;
    for(it = mp[v].begin(); it != mp[v].end(); ++it)
    {
        if(!visited[*it])
            DFS(*it);
    }
}

int main(){
    graph g;
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,2);
    g.addEdge(2,0);
    g.addEdge(2,3);
    g.addEdge(3,3);
    
}