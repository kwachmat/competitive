#include <bits/stdc++.h>
using namespace std;

int dp[2001][2001];

int edit_dist(string a, string b) {
	int m = a.size();
	int n = b.size();
	
	for(int i=0; i<=m; i++) dp[i][0] = i;
	for(int j=0; j<=n; j++) dp[0][j] = j;
	
	for(int i=1; i<=m; i++) {
		for(int j=1; j<=n; j++) {
		
			if(a[i-1] == b[j-1]) dp[i][j] = dp[i-1][j-1];
			else dp[i][j] = min( dp[i-1][j]+1, min(dp[i][j-1]+1, dp[i-1][j-1]+1) );
			
		}
	}
	
	return dp[m][n];
}

int main() {
	int cases;
	string s_1, s_2;
	ios_base::sync_with_stdio(0);
	
	cin >> cases;
	while(cases --> 0) {
		cin >> s_1 >> s_2;
		cout << edit_dist(s_1, s_2) << "\n";
	}
	
	return 0;
}
