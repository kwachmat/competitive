#include <bits/stdc++.h>

struct Vertex { 
    bool visited;
    std::vector<int> adj;
    
    Vertex() { visited = false; }
};

void DFS(int u, Vertex *graph)
{
    printf("%d ", u);
    graph[u].visited = true;
    std::vector<int>::iterator it;
    
    for(it=graph[u].adj.begin(); it!=graph[u].adj.end(); it++)
    {
        if(!graph[*it].visited) DFS(*it, graph);
    }
}

void BFS(int u, Vertex *graph)
{
    std::queue<int> bfs_Q;
    
    bfs_Q.push(u);
    
    while(!bfs_Q.empty())
    {
        int v = bfs_Q.front(); bfs_Q.pop();
        graph[v].visited = true;
        printf("%d ", v);
        
        std::vector<int>::iterator it;
        for(it=graph[v].adj.begin(); it!=graph[v].adj.end(); it++)
        {
            if(!graph[*it].visited)
            {
                bfs_Q.push(*it);
                graph[*it].visited = true;
            }
        }
    }
}

int main()
{
    Vertex *graph;
    int a, b, edges, tests, vertices;

    // --------- EACH CASE (GRAPH) ----------
    scanf("%d", &tests);
    for(int t=1; t<=tests; t++)
    {
        // ---------- READ GRAPH ------------
        scanf("%d", &vertices);
        graph = new Vertex [vertices+1];
        
        for(int v=1; v<=vertices; v++)
        {
            scanf("%*d %d", &edges);  
            while(edges--)
            {
                scanf("%d", &a);
                graph[v].adj.push_back(a);
            }
        }

        // ------- PROCESS QUERIES ----------
        printf("graph %d\n", t);
        
        while(scanf("%d %d", &a, &b))
        {
            if(a == 0 and b == 0) break;
            (b == 0 ? DFS(a, graph) : BFS(a, graph));
            printf("\n");
            
            for(int v=1; v<=vertices; v++) graph[v].visited = false;
        }		

        // --------- FREE MEMORY ------------
        delete [] graph;
        printf("\n");
    }

    return 0;	
} 