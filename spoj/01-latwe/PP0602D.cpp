#include <cstdio>

int main(int argc, char *argv[])
{
    int tab[10000], shift, hm_numbers, hm_printed = 0;
    
    // input
    scanf("%d %d", &hm_numbers, &shift);
    
    // read & write in the same time
    for(int i=0; i<hm_numbers; i++)
    {
        scanf("%d", &tab[i]);
        
        // print [shift..]
        if(i >= shift % hm_numbers) 
        {
            hm_printed++;
            printf("%d ", tab[i]);
        }
    }
    
    // print [0..shift]
    for(int i=0; i<(hm_numbers-hm_printed); i++) printf("%d ", tab[i]);
    
    printf("\n");
    return 0;
}