#include <bits/stdc++.h>
using namespace std;

struct Edge {
	int index, weight;
    Edge(int i, int w) { index=i; weight=w; }
    bool operator < (const Edge& x) const { return (weight < x.weight); }
};

// ------------------------ DIJKSTRA ---------------------------------
void runDijkstra(vector<Edge> adj[], int dist[], int V, int s)
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
                Q.push(neighbour); // visit him in next run
				dist[neighbour.index] = dist[u] + neighbour.weight;
			}
		}
	}
}

// -------------------------- MAIN -----------------------------------
int main()
{
    const int INF = 1000000;
    int tests, V, E, source, target;
    
	scanf("%d", &tests);
	while(tests--)
    {
		scanf("%d %d", &V, &E);
        vector<Edge> adj[V+1];
        int *dist = new int[V+1];
        
		for(int i=0; i<E; i++)
        { // read edges
            int a, b, c;
			scanf("%d %d %d", &a, &b, &c);
			adj[a].push_back(Edge(b, c));
		}
        
        // clear distance array
		for(int i=0; i<=V; ++i) { dist[i] = INF; }
        
        // run dijkstra
		scanf("%d %d", &source, &target);
		runDijkstra(adj, dist, V, source);
        
		if(dist[target] != INF) printf("%d\n", dist[target]);
		else printf( "NO\n" );
        
        delete [] dist;
	}
    
	return 0;
}