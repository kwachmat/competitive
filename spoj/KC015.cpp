#include <bits/stdc++.h>

int compareBigNum(std::string s1, std::string s2, unsigned size)
{
    if(s1 == s2) return 1; // rowne
    
    for(unsigned i=0; i<size; i++)
    {
        if((int)s1[i]-48 > (int)s2[i]-48) return 0; // pierwszy wiekszy
        else if((int)s2[i]-48 > (int)s1[i]-48) return 2; // drugi wiekszy
    }
}

int main(int argc, char *argv[])
{
    std::string a, b, operation;
    std::ios_base::sync_with_stdio(0);
    
    while(std::cin >> a >> operation >> b)
    {
        unsigned a_size = a.length();
        unsigned b_size = b.length();
        
        if(a_size != b_size)
        {
            while(a_size < b_size) { a.insert(0, "0"); a_size++; }
            while(b_size < a_size) { b.insert(0, "0"); b_size++; }
        }
        
        int result = compareBigNum(a, b, a_size);
        
        if(operation == "==") std::cout << (result == 1);
        else if(operation == "!=") std::cout << (result != 1);
        else if(operation == ">=") std::cout << (result <= 1);
        else if(operation == "<=") std::cout << (result >= 1);
        
        std::cout << "\n";
    }
    
    return 0;
}