#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int cases, n;	
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);
	
	cin >> cases;
	while(cases --> 0) {
		cin >> n;
		bool acceptable = true;
		vector<string> words(n);
		for(int i=0; i<n; cin >> words[i++]);
		
		sort(words.begin(), words.end());
		
		string prev = words[0];
		for(int i=1; i<int(words.size()); i++) {
			if(prev == words[i].substr(0, prev.length())) {
				acceptable = false;
				break; 
			}
			prev = words[i];
		}
		
		cout << (acceptable ? "YES\n" : "NO\n");
	}
	
	return 0;
}
