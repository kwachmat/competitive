#include <iostream>

int main()
{
    char ch;
    int comp_number, numbers, tab[1000];
    
    std::cin >> numbers;
    for(int i=0; i<numbers; i++) std::cin >> tab[i];
    
    std::cin >> ch >> comp_number;

    if(ch == '<')
        for(int i=0; i<numbers; i++)
            if(tab[i] < comp_number) std::cout << tab[i] << "\n";
    
    if(ch == '>')
        for(int i=0; i<numbers; i++)
            if(tab[i] > comp_number) std::cout << tab[i] << "\n";
    
    return 0;
}