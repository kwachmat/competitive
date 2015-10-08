#include <cstdio>

int main() {
    int n, k;
    
    scanf("%d %d", &n, &k);
    if(2*k > n) printf("NIE");
    else {
        for(int i=0, cnt=0; cnt<n; i++)
        {
            if(cnt++ < n) printf("%d ", (n+1)/2-i);
            if(cnt++ < n) printf("%d ", n-i);
        }
    }
    
    printf("\n");
    return 0;
}