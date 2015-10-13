#include <bits/stdc++.h>

int main() {
    int n, k, x;
    long long res;
    long long fact[] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800, 39916800, 479001600};

    while(~scanf("%d %d", &n, &k)) {
        res = fact[n];

        while(k--) {
            scanf("%d", &x);
            res = res / fact[x];
        }

        printf("%lld\n", res);
    }

    return 0;
}