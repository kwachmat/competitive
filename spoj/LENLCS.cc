#include <bits/stdc++.h>

unsigned lcs_length[1001][1001];
int main(int argc, char *argv[])
{
    char a[1001], b[1001];
    unsigned tests, a_size, b_size;
    
    std::cin >> tests;
    while(tests--)
    {
        std::cin >> a_size >> a >> b_size >> b;

        for(unsigned i=1; i<=a_size; i++)
        {
            for(unsigned j=1; j<=b_size; j++)
            {
                if(a[i-1] == b[j-1]) lcs_length[i][j] = lcs_length[i-1][j-1] + 1;
                else lcs_length[i][j] = std::max(lcs_length[i-1][j], lcs_length[i][j-1]);
            }
        }

        std::cout << lcs_length[a_size][b_size] << "\n";
    }
    
    return 0;
}