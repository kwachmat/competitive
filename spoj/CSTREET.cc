#include <bits/stdc++.h>
using namespace std;

int leader[1005], amount[1005];

int find(int a) {
	return (leader[a] == a ? a : leader[a]=find(leader[a]));
}

bool join(int a, int b) {
	int x = find(a);
	int y = find(b);
	
	if(x == y) return false;
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
	int64_t answer = 0LL;
	int V, E, cost, cases, a,b,c;
	ios_base::sync_with_stdio(0);
	
	cin >> cases;
	while(cases --> 0) {
	
		cin >> cost >> V >> E;
		pair<int, pair<int,int> > edges[300001];
	
		for(int i=1; i<=V; i++) {
			leader[i] = i;
			amount[i] = 1;
		}
	
		for(int i=0; i<E; i++) {
			cin >> a >> b >> c;
			edges[i] = make_pair(c, make_pair(a, b));
		}	
	
		sort(edges, edges+E);
	
		for(int i=0; i<E; i++) {
			if(join(edges[i].second.first, edges[i].second.second)) answer += edges[i].first;
		}
	
		cout << int64_t(cost) * answer;
	}
	return 0;
} 
