#include <map>
#include <iostream>
using namespace std;

map<int,int64_t> x, y;
map<pair<int,int>, int64_t> points;

int main() {
	int n, a, b;
	int64_t ans=0LL;
	ios_base::sync_with_stdio(0);
	
	cin >> n;
	for(int i=0; i<n; ++i){
		cin >> a >> b;
		++x[a];
		++y[b];
		++points[make_pair(a,b)];
	}	

	for(auto i : x) ans += (i.second-1)*i.second/2;
	for(auto j : y) ans += (j.second-1)*j.second/2;
	for(auto k : points) ans -= (k.second-1)*k.second/2;
	
	cout << ans;
	return 0;
}
