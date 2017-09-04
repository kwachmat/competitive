#include <stdio.h>

int main()
{
    int t, n;
    int dist[201][201];
    
    scanf("%d", &t);
    while(t--)
    {
        // input
        scanf("%d", &n);
        for(int i=0; i<n; i++) for(int j=0; j<n; j++) scanf("%d", &dist[i][j]);

        // rev relaxation
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                bool neighbour = true;
                for(int k=0; k<n; k++)
                {
                    if(i!=k && j!=k && (dist[i][k]+dist[k][j] == dist[i][j])) neighbour = false;
                }
                if(neighbour) printf("%d %d\n", i+1, j+1);
            }
        }
        printf("\n");
    }
        
    return 0;
}