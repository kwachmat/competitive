#include <bits/stdc++.h>
using namespace std;

struct Vertex {
    int color;
    vector<int> adj;
    Vertex() { color = 0; }
};

bool FindSusp(vector<Vertex> &graph, int start) {
    queue<int> Q;
    Q.push(start);
    graph[start].color = 1;
    
    while(not Q.empty()) {
        int u = Q.front(); Q.pop();
        
        for(unsigned i=0; i<graph[u].adj.size(); i++) {
            int v = graph[u].adj[i];
            
            if(graph[v].color == 0) {
                Q.push(v);
                graph[v].color = ~graph[u].color;
            }
            else if(graph[u].color == graph[v].color)return true;
        }
    }
    
    return false;
}

int main() {
    int tests, v, e, a, b;

    scanf("%d", &tests);
    for(int t=1; t<=tests; t++) {
        scanf("%d %d", &v, &e);
        vector<Vertex> graph(v+1);
        
        while(e--) {
            scanf("%d %d", &a, &b);
            graph[a].adj.push_back(b);
            graph[b].adj.push_back(a);
        }
        
        bool homosie = false;
        printf("Scenario #%d:\n", t);
        
        for(int i=1; i<=v; i++) {
            if(graph[i].color == 0 and FindSusp(graph, i)) { homosie = true; break; }
        }
                
        printf(homosie ? "Suspicious bugs found!\n" : "No suspicious bugs found!\n");
    }
    
    return 0;
}