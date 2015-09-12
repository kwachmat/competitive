#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long UNS_LL;

UNS_LL RunGCD(UNS_LL a, UNS_LL b)
{
    while(a*b > 0) { (a > b ? a=a%b : b=b%a); }
    return (a > b ? a : b);
}

int main()
{
    int n;
    UNS_LL x, gcd = 0, prev_x = 0;
    
    scanf("%d", &n);
    vector<int> differences;
    
    for(int i=0; i<n; i++)
    {
        scanf("%lld", &x);
        if(prev_x > 0)  
        {
            differences.push_back(x-prev_x);
            gcd = (gcd == 0 ? x-prev_x : RunGCD(gcd, (x-prev_x)));
        }
        
        prev_x = x;
    }

    UNS_LL sum = 0;
    for(auto it : differences) sum += (it/gcd - 1);
    
    printf("%lld\n", sum);
    
   return 0;
}