#include <bits/stdc++.h>
typedef unsigned long long UNS_LL;

UNS_LL GreatestCommonD(UNS_LL a, UNS_LL b)
{
    while(a*b > 0) { (a > b ? a=a%b : b=b%a); }
    return (a > b ? a : b);
}

UNS_LL LeastCommonM(UNS_LL a, UNS_LL b)
{
    return (a / GreatestCommonD(a,b)) * b;
}

int main(int argc, char *argv[])
{
    UNS_LL current, next;
    unsigned tests, numbers;
    std::ios_base::sync_with_stdio(0);
    
    std::cin >> tests;
    while(tests--)
    {        
        std::cin >> numbers;
        std::cin >> current;
        
        while(--numbers)
        {
            std::cin >> next;
            current = LeastCommonM(current, next);
        }

        std::cout << current << "\n";
    }
    
    return 0;
}