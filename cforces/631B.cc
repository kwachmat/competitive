#include <bits/stdc++.h>
using namespace std;
#define iosync ios_base::sync_with_stdio(0)

struct Cell {
	int layer, colour;
	Cell() { layer=0; colour=0; }
};

int main() {
	iosync;
	Cell rows[5001], cols[5001];
	int n, m, queries, q_type, q_cells, q_colour;
	
	cin >> n >> m >> queries;
	for(int query=1; query<=queries; ++query) {
		cin >> q_type >> q_cells >> q_colour;
	
		if(q_type == 1) { //paint row 'q_cells' with 'q_colour'
			rows[q_cells].layer = query;
			rows[q_cells].colour = q_colour;	
		}
		else { //paint col 'q_cells' with 'q_colour'
			cols[q_cells].layer = query;
			cols[q_cells].colour = q_colour;	
		}
	}
	
	for(int i=1; i<=n; ++i) {
		for(int j=1; j<=m; ++j) {
			cout << (rows[i].layer > cols[j].layer ? rows[i].colour :cols[j].colour) << " \n"[j==m];
		}
	}	
	
	return 0;
}
