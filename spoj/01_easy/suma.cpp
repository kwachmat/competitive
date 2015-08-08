#include <bits/stdc++.h>

int main(int argc, char *argv[])
{
    int number, sum = 0;
    
    while(scanf("%d", &number) != EOF)
    {
        sum += number;
        printf("%d\n", sum);
    }
    
    return 0;
}