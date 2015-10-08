#include <cstdio>

int main() {
    
    long long n, i;
    long long res = 0;
    
    scanf("%lld", &n);
    for(i=2; 2*i<=n; i*=2)
    {
        res += i*(i-1)/2;
    }
    
    res += (n-i)*(n+1-i)/2;
    printf("%lld\n", res);
    
    return 0;
}