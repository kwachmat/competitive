#include <cmath>
#include <iostream>

int main()
{
    double guests;
    
    while(std::cin >> guests)
    {    
        if(guests < 2) std::cout << "0\n";
        else
        {
            double c = (-2.0)*(guests-1);
            double delta = 1.0 - 4.0*c;

            double x1 = (-1.0 - sqrt(delta))/2.0;
            double x2 = (-1.0 + sqrt(delta))/2.0;

            std::cout << (x1 > 0.0 ? static_cast<int>(ceil(x1)) : static_cast<int>(ceil(x2))) << "\n";
        }
    }
    
   return 0;
}