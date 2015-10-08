#include <cstdio>

int main() {
    
    long long n;
    scanf("%lld", &n);
    printf(((!(n&(n-1)) or n <= 1) ? "TAK\n" : "NIE\n"));

    return 0;
} 