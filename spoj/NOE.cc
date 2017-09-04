#include <cstdio>

int getInteger()
{
    int res = 0;
    char c = getchar_unlocked();
    
    if(c == -1) return -1;
    
    while(c > -1 && c >= '0' && c <= '9')
    {
        res = res * 10;
        res =  res + (c-'0');
        c = getchar_unlocked();
    }
        
    return res;
}

int main()
{
    long long res = 0;
    int x = getInteger();
    
    while(x != -1)
    {
        res = res ^ x;
        x = getInteger();
    }
    
    printf("%lld\n", res);
    return 0;
}