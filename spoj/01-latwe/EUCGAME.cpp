#include <cstdio>

int main(int argc, char *argv[])
{
    int tests, playerA, playerB;
    
    scanf("%d", &tests);
    while(tests--)
    {
        scanf("%d %d", &playerA, &playerB);

        if(playerA == 1 || playerB == 1) playerA = playerB = 1;
        
        while(playerA != playerB)
        {
            if(playerA < playerB) playerB -= playerA;
            else if(playerB < playerA) playerA -= playerB;
        }

        printf("%d\n", playerA+playerB);
    }
    return 0;
}