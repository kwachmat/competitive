#include <map>
#include <cstdio>
#include <algorithm>

#define LL long long
std::map<int, LL> dp;
inline LL max(LL a, LL b) { return (a > b ? a : b); }

LL fun(int x) {
	if(x == 0) return 0;
	if(dp[x] != 0) return dp[x];
	
	dp[x] = max(x*1LL, fun(x/2)+fun(x/3)+fun(x/4));
	
	return dp[x];
}

int main() {
	int n;
	
	while(~scanf("%d", &n)) {
		printf("%lld\n", fun(n));
	}
	
	return 0;
}
