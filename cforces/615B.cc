#include <bits/stdc++.h>
using namespace std;

#define MAX_N 100001

int dp[MAX_N];

int main() {	
	int V, E, a,b;
	int64_t answer = 0LL;
	vector<int> g[MAX_N];
	ios_base::sync_with_stdio(0);
	
	cin >> V >> E;
	while(E--) {
		cin >> a >> b;
		g[a].push_back(b);
		g[b].push_back(a);
	}

	for(int a=1; a<=V; a++) {
		dp[a] = 1;
		for(auto b : g[a]) {
			if(b < a) dp[a] = max(dp[a], dp[b]+1);
		}
	}
		
	for(int i=1; i<=V; i++) {
		answer = max(answer, dp[i]*int64_t(g[i].size()));
	}
	
	cout << answer;
	return 0;
}
