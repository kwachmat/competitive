#include <string>
#include <iostream>

int main()
{
    int cols;
    std::string str;
    
    while(std::cin >> cols)
    {
        if(cols == 0) break;
        else std::cin >> str;
        
        for(int c=0; c<cols; c++)
        {
            for(int i=c, mod=1; i<str.size(); mod++)
            {
                std::cout << str[i];
                if(mod % 2 == 1) i += 2*cols - (2*c) - 1;
                else i += 1 + (2*c);
            }
        }
        
        std::cout << "\n";
    }
    
    return 0;
}