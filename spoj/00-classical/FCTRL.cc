#include <bits/stdc++.h>

int main()
{
    unsigned t;
    unsigned long long n, powerOf5, result;
    
    std::cin >> t;
    while(t--)
    {
        result = 0;
        powerOf5 = 5;
        std::cin >> n;
        while((n/powerOf5) >= 1)
        {
            result += n/powerOf5;
            powerOf5 = powerOf5 * 5;
        }
        
        std::cout << result << "\n";
    }
    
    return 0;
}