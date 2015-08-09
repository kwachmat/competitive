#include <cstdio>

int main()
{
    int a, b, tests;
 
    int lastDigits[10][4] = {  
        {0, 0, 0, 0}, // 0
        {1, 1, 1, 1}, // 1
        {2, 4, 8, 6}, // 2
        {3, 9, 7, 1}, // 3
        {4, 6, 4, 6}, // 4
        {5, 5, 5, 5}, // 5
        {6, 6, 6, 6}, // 6
        {7, 9, 3, 1}, // 7
        {8, 4, 2, 6}, // 8
        {9, 1, 9, 1}  // 9
    };
    
    scanf("%d", &tests);
    while(tests--)
    {
        scanf("%d %d", &a, &b);
        printf("%d\n", lastDigits[a%10][(b-1)%4]);
    }
    
    //printf("ostatnia cyfra a: %d\n", a%10);
    //printf("lastDigits[%d][%d] = %d\n", a%10, b, lastDigits[a%10][(b-1)%4]);
    
    return 0;
}