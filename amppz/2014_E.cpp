#include <bits/stdc++.h>
using namespace std;

int calcGCD(int a, int b) { return (b==0 ? a : calcGCD (b, a%b)); }

int main() {
    int tests, p, q, n, gcd;

    cin >> tests;
    while(tests --> 0) {
        cin >> p >> q >> n;
        gcd = calcGCD(p, q);

        if(n % gcd != 0) cout << "R\n";
        else
        {
            if(n%p == 0) cout << "E\n";
            else if(p < q)
            { // P<Q, zaczyna ten ktory ma mniej
                if(n >= p) cout << "E\n";
                else if(n+p < q) cout << "E\n";
                else cout << ((n % (q-p)!=0) ? "E\n" : "P\n");
            }
            else
            { // P>Q, zaczyna ten ktory ma wiecej
                if(p > n) cout << "P\n";
                else {
                    int r = n % p;
                    cout << ((r<q and r%(p-q)==0) ? "E\n" : "P\n");
                }
            }
        }
    }

    return 0;
}
