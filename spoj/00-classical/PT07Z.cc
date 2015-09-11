#include <bits/stdc++.h>
using namespace std;

struct Vertex {
    int dist;
    bool visited;
    vector<int> adj;
    Vertex() { visited = false; dist = 0; }
};

int LongestPathBFS(int start, vector<Vertex> &G)
{
    queue<int> Q;
    Q.push(start);
    int maxdist = 0;
    int maxdist_V = 0;
    G[start].visited = true;
    
    while(not Q.empty())
    { 
        int u = Q.front(); Q.pop();
        for(auto i : G[u].adj)
        {
            if(not G[i].visited) 
            {
                Q.push(i);
                G[i].visited = true;
                G[i].dist = G[u].dist + 1;
                if(G[i].dist > maxdist) { maxdist = G[i].dist; maxdist_V = i; }
            }
        }
    }
    
    return maxdist_V;
}

int main()
{
    int V;
    
    scanf("%d", &V);
    vector<Vertex> graph(V+1);
    
    for(int i=1; i<V; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        graph[a].adj.push_back(b);
        graph[b].adj.push_back(a);
    }
    
    int farthestFromRoot = LongestPathBFS(1, graph);
    for(int i=0; i<=V; i++) { graph[i].dist = 0; graph[i].visited = false; } // reset
    
    printf("%d\n", graph[LongestPathBFS(farthestFromRoot, graph)].dist); // longest path from {farthestFromRoot}
    
    return 0;
}