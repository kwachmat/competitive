#include <bits/stdc++.h>
using namespace std;

long long horner(int n, int c[], int x)
{
    long long res = c[0];
    for(int i=0; i<n; i++) res = res*x + c[i+1];
    
    return res;
}

int main()
{
    int n, x, coe[1001];
    unsigned k, cases = 0;
    
    cin.tie(NULL);
    ios_base::sync_with_stdio(0);
    
    // polynomial
    while(cin >> n)
    {
        if(n == -1) break;
        
        cout << "Case " << ++cases << ":\n";
        for(int i=0; i<=n; i++) cin >> coe[i];
        
        // points
        cin >> k;
        while(k--)
        {
            cin >> x;
            cout << horner(n, coe, x) << "\n";
        }
    }
    
    return 0;
}