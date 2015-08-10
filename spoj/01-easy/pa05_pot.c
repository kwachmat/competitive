#include <stdio.h>

int main(int argc, char *argv[])
{
	int	a, b, tests;
    int lastDigits[10][4] = {  
        {0, 0, 0, 0}, {1, 1, 1, 1},
        {2, 4, 8, 6}, {3, 9, 7, 1},
        {4, 6, 4, 6}, {5, 5, 5, 5},
        {6, 6, 6, 6}, {7, 9, 3, 1},
        {8, 4, 2, 6}, {9, 1, 9, 1} 
    };
    
    scanf("%d", &tests);
    while(tests--)
    {
        scanf("%d %d", &a, &b);
        printf("%d\n", lastDigits[a%10][(b-1)%4]);
    }

    return 0;
}