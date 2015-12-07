#include <iostream>
#include <cstdint>

int main() {
	int S, k;
	int64_t sposoby[41];
	std::ios_base::sync_with_stdio(0);
	
	std::cin >> S >> k;
	for(int i=0; i<=S; i++) sposoby[i] = 0;
	for(int i=1; i<=k; i++) sposoby[i] = 1;
	
	for(int i=2; i<=S; i++) {
		for(int j=1; j<=k and i-j>0; j++) {
			sposoby[i] += sposoby[i-j];
		}
	}
	
	std::cout << sposoby[S] << "\n";
	return 0;
}
