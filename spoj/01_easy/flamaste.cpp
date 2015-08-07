#include <cstdio>
#include <cstring>

int main()
{
    int tests, letterStreak;
    char previousLetter, word[201];
  
    scanf("%d", &tests);
    while(tests--)
    {
        // new input
        scanf("%s", word);
        letterStreak = 1;

        // grab the 1st letter
        previousLetter = word[0];
        printf("%c", previousLetter);

        // now explore the rest
        for(int i=1; i<strlen(word); i++)
        {
                if(word[i] != previousLetter) // current <> previous 
                { 
                        if(letterStreak == 1) 
                        { // just another letter
                            printf("%c", word[i]); 
                        }
                        else if(letterStreak == 2)
                        { // double streak finished
                            printf("%c%c", previousLetter, word[i]); 
                            letterStreak = 1;
                        }
                        else
                        { // multiple streak finished
                            printf("%d%c", letterStreak, word[i]);
                            letterStreak = 1;
                        }
                }
                else letterStreak++; // current == previous
            
                previousLetter = word[i];
        }
    
        // last letter
        if(letterStreak == 2) printf("%c\n", previousLetter);
        else if(letterStreak > 2) printf("%d\n", letterStreak);
        else printf("\n");
    }
    
    return 0;
}