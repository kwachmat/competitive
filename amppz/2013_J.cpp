#include <cstdio>

int main() {
    
    int n, i;
    long long res = 0;
    
    scanf("%d", &n);
    for(i=2; 2*i<=n; i<<=1)
    {
        res += i*(i-1)>>1;
    }
    
    res += (n-i)*(n+1-i)>>1;
    printf("%lld\n", res);
    
    return 0;
}