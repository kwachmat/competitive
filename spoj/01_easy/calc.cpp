#include <iostream>

int main(int argc, char *argv[])
{
    char oper;
    int firstValue, secondValue, result;
    
    while(std::cin >> oper >> firstValue >> secondValue)
    {
        switch(oper)
        {
            case '+': std::cout << firstValue+secondValue; break;
            case '-': std::cout << firstValue-secondValue; break;
            case '*': std::cout << firstValue*secondValue; break;
            case '/': std::cout << firstValue/secondValue; break;
            case '%': std::cout << firstValue%secondValue; break;
        }
        
        std::cout << "\n";
    }
    
    return 0;
}