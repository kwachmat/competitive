#include <iostream>

int main()
{
    long long b;
    int a, tests, lastDig[10][4] = {  
        {0, 0, 0, 0}, {1, 1, 1, 1},
        {2, 4, 8, 6}, {3, 9, 7, 1},
        {4, 6, 4, 6}, {5, 5, 5, 5},
        {6, 6, 6, 6}, {7, 9, 3, 1},
        {8, 4, 2, 6}, {9, 1, 9, 1} 
    };
    
    std::cin >> tests;
    
    while(tests--)
    {
        std::cin >> a >> b;
        if(a == 0) std::cout << "0\n";
        else if(b == 0) std::cout << "1\n";
        else std::cout << lastDig[a%10][(b-1)%4] << "\n";
    }

    return 0;
}