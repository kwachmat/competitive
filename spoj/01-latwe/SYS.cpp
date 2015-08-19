#include <cstdio>

#define BASE_1 16
#define BASE_2 11

void sys(int x, int base)
{
    int mod;
    char result[10];
    unsigned int size = 0;
    
    for(x; x>0; x = x/base)
    {
        mod = x%base + (x%base < 10 ? 48 : 55);
        result[size++] = static_cast<char>(mod);
    }
    
    for(int i=size-1; i>=0; i--) printf("%c", result[i]);
}

int main(int argc, char *argv[])
{
    int number, tests;
    
    scanf("%d", &tests);
    while(tests--)
    {
        scanf("%d", &number);
    
        sys(number, BASE_1);
        printf(" ");
        sys(number, BASE_2);
        printf("\n");
    }
    
    return 0;
    
}