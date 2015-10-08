#include <bits/stdc++.h>

int getInteger(int *x) {
    *x = 0;
    char c = getchar_unlocked();

    while(c != -1 && c >= '0' && c <= '9')
    {
        *x =  *x * 10 + (c-'0');
        c = getchar_unlocked();
    }
}

void putInteger(int x) {
    if (x > 9) putInteger(x / 10);
    putchar_unlocked('0' + (x % 10));
}

int main() {

    int n, t;
    const int SIZE = 8000000;
    std::vector<int> fPrimeDiv(SIZE+1);
    for(int i=2; i<=SIZE; i++) fPrimeDiv[i] = i;

    // sieve
    for(int i=2; i*i<=SIZE; i++) {
        if(fPrimeDiv[i] == i) {
            for(int j=i*i; j<=SIZE; j+=i) {
                if(fPrimeDiv[j] == j) fPrimeDiv[j] = i;
            }
        }
    }

    // i/o
    getInteger(&t);
    while(t--)
    {
        getInteger(&n);
        if(n == 1) putchar_unlocked('1');

        while (n != 2 && (n & 1) == 0) {
            putchar_unlocked('2');
            putchar_unlocked('*');
            n >>= 1;
        }

        while(n > 1)
        {
            putInteger(fPrimeDiv[n]);
            n = n / fPrimeDiv[n];
            if(n > 1) putchar_unlocked('*');
        }

        putchar_unlocked('\n');
    }
    return 0;
} 