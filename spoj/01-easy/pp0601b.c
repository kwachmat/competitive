#include <stdio.h>

int main(int argc, char *argv[])
{
    int i, maxNumber, divisible, nonDivisible, tests;
    
    scanf("%d", &tests);
    while(tests--)
    {
        // read the input
        scanf("%d %d %d", &maxNumber, &divisible, &nonDivisible);
        
        // in <2;maxNumber>
        for(i=2; i<=maxNumber;)
        {
            // i % x == 0 and i % y <> 0
            if(i % divisible == 0 && i % nonDivisible != 0)
            {
                printf("%d ", i);
                i += divisible;
            }
            else i++;
        }
        printf("\n");
    }
    
    return 0;
}