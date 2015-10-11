#include <bits/stdc++.h>
using namespace std;

#define u_ii unsigned
const int SIZE = 1000000;

int main() {

    u_ii primes[SIZE+1];
    u_ii t, a, b, cnt = 0;
    bitset<SIZE> isComposite;

    // sieve
    for(u_ii i=2; i<=SIZE; i++) {
        if(!isComposite[i]) for(u_ii j=2*i; j<=SIZE; j+=i) isComposite[j] = 1;
    }

    // count primes in [0..i]
    for(int i=2; i<=SIZE; primes[i]=cnt, i++) {
        if(!isComposite[i]) ++cnt;
    }
    
    scanf("%d", &t);
    while(t--) {   
        scanf("%d %d", &a, &b);
        printf("%d\n", (isComposite[a] ? primes[b]-primes[a] : primes[b]+1-primes[a]));
    }

    return 0;
} 