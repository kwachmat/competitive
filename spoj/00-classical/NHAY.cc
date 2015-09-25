#include <string>
#include <iostream>

void count(std::string &str, std::string &obj)
{
    int n = 0;
    std::string::size_type pos = 0;
    
    while((pos = obj.find(str, pos)) != std::string::npos)
    {
        std::cout << pos << "\n";
    	n++; pos++;
    }
    
    if(n == 0) std::cout << "\n";
}

int main()
{
    int needle_size;
    std::string needle, haystack;
    
    std::cin.tie(NULL);
    std::ios_base::sync_with_stdio(0);
    
    while(std::cin >> needle_size >> needle >> haystack) count(needle, haystack);    
    return 0;
}