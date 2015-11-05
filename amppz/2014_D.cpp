#include <cstdio>

int main() {
    const int MAX = 2000001;
    int N, x, c[MAX+1];
    
    scanf("%d", &N);
    long long result = -N;
    for(int i=1; i<=MAX; i++) c[i] = 0;
    
    // count frequencies
    while(~scanf("%d", &x)) c[x]++;
    
    for(int i=1; i<=MAX; i++)
    {
        for(int j=i; j<=MAX; j+=i) result += (long long)c[i] * (long long)c[j];
    }
    
    printf("%lld\n", result);
    return 0;
}