#include <cstdio>

#define N 10001

int main()
{
    int tests, number;
    bool primeNumbers[N];
    
     // mark all numbers as prime at the beginning
    for(int i=2; i<N; i++) primeNumbers[i] = true;
    
    // sieve of eratosthenes
    for(int i=2; i*i<N; i++)
    { 
        if(primeNumbers[i] == false) continue; // already MARKED as a NON-PRIME number
        
        for(int j=i*2; j<N; j+=i) primeNumbers[j] = false; // MARK all multiples of /i/ as NON-PRIME numbers
    }
    
    // read the input
    scanf("%d", &tests);
    
    while(tests--)
    {
        scanf("%d", &number);
        printf((primeNumbers[number] == true ? "TAK\n" : "NIE\n"));
    }
    
    return 0;
}