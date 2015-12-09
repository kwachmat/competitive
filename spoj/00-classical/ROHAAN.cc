#include <cstdio>

#define INF 10000007

int main() {
    int start, dest, d[60][60];
    int cases, vertices, queries;
	
    scanf("%d", &cases);
    for(int c=1; c<=cases; c++) {
        long long res = 0LL;
        scanf("%d", &vertices);
		
        for(int i=1; i<=vertices; i++) {
            for(int j=1; j<=vertices; j++) scanf("%d", &d[i][j]);
        }
		
        for(int u=1; u<=vertices; u++) {
            for(int v1=1; v1<=vertices; v1++) {
                for(int v2=1; v2<=vertices; v2++) {
                    if(d[v1][v2] > d[v1][u] + d[u][v2]) d[v1][v2] = d[v1][u]+d[u][v2];
                }
            }
        }
		
        scanf("%d", &queries);
        while(queries --> 0) {
            scanf("%d %d", &start, &dest);
            res += d[start][dest];
        }
		
        printf("Case #%d: %lld\n", c, res);
    }
	
    return 0;
}
