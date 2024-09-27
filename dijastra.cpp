#include <iostream>
#include <vector>
#include <queue>
#include <limits>
using namespace std;
const int INF = numeric_limits<int>::max();
// Structure to represent a weighted edge
struct Edge
{
    int to;
    int weight;
    Edge(int t, int w) : to(t), weight(w) {}
};
// Function to find the shortest paths using Dijkstra's algorithm
void dijkstra(const vector<vector<Edge>> &graph, int start,
              vector<int> &dist)
{
    int n = graph.size();
    dist.assign(n, INF);
    dist[start] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, start});
    while (!pq.empty())
    {
        int u = pq.top().second;
        int d = pq.top().first;
        pq.pop();
        if (d > dist[u])
            continue;
        for (const Edge &e : graph[u])
        {
            int v = e.to;
            int w = e.weight;
            if (dist[u] + w < dist[v])
            {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }
}
int main()
{
    int n, m; // Number of vertices and edges
    cin >> n >> m;
    vector<vector<Edge>> graph(n);
    for (int i = 0; i < m; ++i)
    {
        int u, v, w; // Edge from u to v with weight w
        cin >> u >> v >> w;
        graph[u].emplace_back(v, w);
    }
    int start; // Starting vertex
    cin >> start;
    vector<int> dist;
    dijkstra(graph, start, dist);
    cout << "Shortest distances from vertex " << start << " to all other vertices:" << endl;
    for (int i = 0; i < n; ++i)
    {
        cout << "Vertex " << i << ": " << dist[i] << endl;
    }
    return 0;
}
