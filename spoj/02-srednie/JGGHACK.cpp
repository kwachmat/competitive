#include <cstdio>

int main(int argc, char *argv[])
{
    char secretWord[21];
    int secondLetterValues[16] = {0, 16, 32, 48, 64, 80, 96, 112, 128, 114, 160, 176, 192, 208, 224, 240};

    while(scanf("%s", secretWord) != EOF)
    {
        for(int i=0; i<20; i+=2)
        {
            int firstValue  = int(secretWord[i])-65;
            int secondValue = secondLetterValues[int(secretWord[i+1])-65];

            printf("%c", char(firstValue+secondValue));
        }

        printf("\n");
    }
    
    return 0;
}