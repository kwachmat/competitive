#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t[1000001];
	int n, ss = 0;
    vector<int> inversed;
    ios_base::sync_with_stdio(0);
    
	cin >> n;
	for(int i=0; i<n; cin >> t[i++]);
    
	int maks = 0;
	inversed.push_back(0);
    
	for(int i=0; i<n; i++) {
		maks = max(maks, t[i]);
		if(maks == i+1) { ss++; inversed.push_back(i+1); } // nowa S. S.
	}	
    
	cout << ss << "\n"; // liczba spojnych skladowych
    
	for(int i=1; i<=ss; i++) {
		cout << inversed[i] - inversed[i-1] << " "; // rozmiar spojnej skladowej
		for(int j=inversed[i-1]+1; j<=inversed[i]; j++) cout << j << " "; // wierzcholki
		
        cout << "\n";
	}
	return 0;
}