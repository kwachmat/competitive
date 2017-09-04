#include <set>
#include <cstdio>

int main(int argc, char *argv[])
{
    unsigned ileZamian, t, n, x, free;
    
    scanf("%d", &t);
    while(t--)
    {
        free = 1;
        ileZamian = 0;
        scanf("%d", &n);
        unsigned numbers[10001];
        std::set<unsigned> taken_spots;

        // ---------------- INPUT ---------------------
        for(int i=0; i<n; i++)
        {
            scanf("%d", &numbers[i]);
            if(taken_spots.find(numbers[i]) != taken_spots.end()) // juz jest
            {
                ileZamian++;
                numbers[i] = 0;
            }
            else taken_spots.insert(numbers[i]);
        }

        // ------------------ OUTPUT --------------------
        if(ileZamian == 0) printf("OK");
        else
        {
            for(int i=0; i<n; i++)
            {
                if(numbers[i] > 0) printf("%d ", numbers[i]);
                else
                {
                    while(taken_spots.find(free) != taken_spots.end()) free++;
                    printf("%d ", free);
                    taken_spots.insert(free);
                }
            }
        }
        
        printf("\n");
    }
    
    return 0;
}