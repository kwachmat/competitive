#include <bits/stdc++.h>
using namespace std;

struct Edge {
    int index, weight;
    Edge(int i, int w) { index=i; weight=w; }
    bool operator < (const Edge& x) const { return (weight < x.weight); }
};

// ------------------------ DIJKSTRA ---------------------------------
void runDijkstra(vector<Edge> adj[], vector<int> &dist, int s)
{
    dist[s] = 0;
    priority_queue<Edge> Q;
    Q.push(Edge(s,0));

    while(not Q.empty())
    {
        Edge current = Q.top(); Q.pop();
        int u = current.index; // id of current vertex

        for(auto neighbour : adj[u])
        {
            if(dist[u] + neighbour.weight < dist[neighbour.index]) // relax
            {
                Q.push(neighbour); // visit him later
                dist[neighbour.index] = dist[u] + neighbour.weight;
            }
        }
    }
}

// -------------------------- MAIN -----------------------------------
int main()
{
    const int V = 501;
    const int INF = 1000000;
    int E, source, target, queries;

    scanf("%d", &E);
    vector<Edge> adj[V+1];
    vector<int> dist (V+1, INF);

    while(E--)
    { // read edges
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        adj[a].push_back(Edge(b, c));
        adj[b].push_back(Edge(a, c));
    }

    // calculate
    scanf("%d", &source);
    scanf("%d", &queries);
    runDijkstra(adj, dist, source);
    
    // answer
    while(queries--)
    {
        scanf("%d", &target);
        if(dist[target] != INF) printf("%d\n", dist[target]);
        else printf("NO PATH\n");
    }
        
	return 0;
}