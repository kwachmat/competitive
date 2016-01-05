#include <bits/stdc++.h>
using namespace std;

int leader[10005], amount[10005];

int find(int a) {
	return (leader[a] == a ? a : leader[a]=find(leader[a]));
}

bool join(int a, int b) {
	int x = find(a);
	int y = find(b);

	if(x==y) return false;
	if(amount[x] <= amount[y]) {
		leader[x] = y;
		amount[y] += amount[x];
	}
	else {
		leader[y] = x;
		amount[x] += amount[y];
	}
	return true;
}


int main() {
	string name;
	int cases, V, E, neigh, cost;
	ios_base::sync_with_stdio(0);
	
	cin >> cases;
	while(cases --> 0) {
		cin >> V;
		int64_t answer = 0LL;
		vector< pair<int, pair<int,int> > > edges;
	
		for(int i=1; i<=V; i++) {
			leader[i] = i;
			amount[i] = 1;
			cin >> name >> E;
			while(E--) {
				cin >> neigh >> cost;
				edges.push_back( make_pair(cost, make_pair(i, neigh)) );
			}
		}
	
		sort(edges.begin(), edges.end());
	
		for(unsigned i=0; i<edges.size(); i++) {
			if(join(edges[i].second.first, edges[i].second.second)) answer += edges[i].first;
		}
	
		cout << answer << "\n";
	}
	
	return 0;
} 
