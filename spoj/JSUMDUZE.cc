#include <string>
#include <iostream>

int main(int argc, char *argv[])
{
    bool usun_wiodace;
    unsigned size_1, size_2;
    int tests, bufor, result;
    std::string num_1, num_2, num_3;
    
    std::ios_base::sync_with_stdio(0);
    
    std::cin >> tests;
    while(tests--)
    {
        std::cin >> num_1 >> num_2;

        bufor = 0;
        num_3 = "";
        usun_wiodace = true;
        size_1 = num_1.length();
        size_2 = num_2.length();

        while(size_1 < size_2) { num_1.insert(0, "0"); size_1++; }
        while(size_2 < size_1) { num_2.insert(0, "0"); size_2++; }

        //std::cout << "DEBUG " << num_1 << " " << num_2 << "\n";
        
        for(int i=size_1-1; i>=0; i--)
        {
            int result = (int)(num_1[i]-48) + (int)(num_2[i]-48) + bufor;

            num_3 += (char)((result%10)+48);
            bufor = (result >= 10 ? result/10 : 0);

            //std::cout << "DEBUG " << num_1[i] << " + " << num_2[i] << "= " << result%10 << " (bufor: )" << bufor << "\n";   
        }

        if(bufor > 0) num_3 += (char)(bufor+48);
        
        for(int i=size_1+bufor-1; i>=0; i--) 
        {
            if(num_3[i] != '0') usun_wiodace = false;
            
            if(num_3.length() == 1 && num_3[i] == '0') std::cout << num_3[i];
            else if(usun_wiodace && num_3[i] != '0') std::cout << num_3[i];
            else if(!usun_wiodace) std::cout << num_3[i];
        }
        std::cout << "\n";
    }
    
    return 0;
}