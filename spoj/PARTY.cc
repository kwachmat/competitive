#include <bits/stdc++.h>
using namespace std;

int main()
{
    int weight[101], value[101];
    int n, maxWeight, A[101][501];
    
    while(true)
    {
        scanf("%d %d", &maxWeight, &n);
        if(maxWeight == 0 and n == 0) break;
        
        // setup
        A[0][0] = 0;
        for(int i=1; i<=n; i++) 
        {
            A[i][0] = 0;
            scanf("%d %d", &weight[i], &value[i]);
        }
        for(int j=0; j<=maxWeight; j++) A[0][j] = 0;

        // 0-1 knapsack
        for(int i=1; i<=n; i++)
        {
            for(int j=0; j<=maxWeight; j++)
            {
                if(weight[i] > j) A[i][j] = A[i-1][j];
                else A[i][j] = max(A[i-1][j], A[i-1][j-weight[i]] + value[i]);
            }
        }

        // count budget cost
        int i = maxWeight;
        while(A[n][i-1] == A[n][i]) { i--; }
        printf("%d %d\n", i, A[n][maxWeight]);
    }
    
   return 0;
}