#include <bits/stdc++.h>
using namespace std;

struct Vertex
{
    bool visited;
    int ancestor;
    vector<int> adj;
    
    Vertex() { this->visited = false; ancestor = -1; }
    void addEdge(int u) { this->adj.push_back(u); }
};
    
bool BFS(Vertex g[], int start, int v)
{
    queue<int> Q;
    Q.push(start);
    int visitations = 1;
    g[start].visited = true;
    
    while(not Q.empty())
    {
        int u = Q.front(); Q.pop();
        
        for(auto v : g[u].adj)
        {
            if(g[v].visited and v != g[u].ancestor) return false;
            
            if(not g[v].visited)
            {
                Q.push(v);
                visitations++;
                g[v].ancestor = u;
                g[v].visited = true;
            }
        }
    }
    
    return (visitations == v);
}

int main()
{
    int N, M;
    Vertex graph[10001];
    ios_base::sync_with_stdio(0);
    
    cin >> N >> M;
    for(int i=0; i<M; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].addEdge(v);
        graph[v].addEdge(u);
    }
    
    cout << (BFS(graph, 1, N) and (M==N-1) ? "YES\n" : "NO\n");
    
    return 0;
}