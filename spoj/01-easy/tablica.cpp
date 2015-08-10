#include <bits/stdc++.h>

int main(int argc, char *argv[])
{
    int array[100001], count(0), number;
    
    while(scanf("%d", &number) != EOF)
    {
        array[count++] = number;
    }
    
    for(int i=0; i<count; i++) printf("%d ", array[count-1-i]);
    
    printf("\n");    
    return 0;
}