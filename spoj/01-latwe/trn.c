#include <stdio.h>

#define MAX_N 200
#define MAX_M 200

int main(int argc, char *argv[])
{
    int i, j, n, m, tab[MAX_N][MAX_M];
    
    scanf("%d %d", &n, &m);
    
    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
            scanf("%d", &tab[i][j]);
        
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++) printf("%d ", tab[j][i]);
        printf("\n");
    }
    
    return 0;
}