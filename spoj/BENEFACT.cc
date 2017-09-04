#include <bits/stdc++.h>
using namespace std;

struct Edge { int length, dst; };
struct BfsResult { int vertex, maxDistance; };

using Vertex = vector<Edge>;
using Graph = vector<Vertex>;

BfsResult bfs(const Graph& g, const int src) {
    vector<int> maxDist(g.size(), -1);
    maxDist[src] = 0;
    queue<int> Q({src});
    while(!Q.empty()) {
        const auto curr = Q.front(); Q.pop();
        for(auto nextEdge : g[curr]) {
            if(maxDist[nextEdge.dst] == -1) { // unvisited
                Q.push(nextEdge.dst);
                maxDist[nextEdge.dst] = maxDist[curr] + nextEdge.length;
            }
        }
    }
    BfsResult result {src, maxDist[src]};
    for(unsigned i=0; i<maxDist.size(); ++i) {
        if(maxDist[i] > result.maxDistance) {
            result.vertex = i;
            result.maxDistance = maxDist[i];
        }
    }
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    int tc;
    cin >> tc;
    while(tc--) {
        int n;
        cin >> n;
        Graph g(n+1);
        for(int i=0; i<n-1; ++i) {
            int u, v, c;
            cin >> u >> v >> c;
            g[u].push_back({c, v});
            g[v].push_back({c, u});
        }
        auto res1 = bfs(g, 1);
        auto res2 = bfs(g, res1.vertex);
        cout << res2.maxDistance << '\n';
    }
    return 0;
}