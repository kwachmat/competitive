#include <cstdio>

int main()
{
    int x_pos, y_pos, tests, lines, dir, steps;
    
    scanf("%d", &tests);
    while(tests--)
    {
        x_pos = y_pos = 0;
        scanf("%d", &lines);
        
        while(lines--)
        {
            scanf("%d %d", &dir, &steps);
            switch(dir)
            {
                case 0: y_pos += steps; break;
                case 1: y_pos -= steps; break;
                case 2: x_pos += steps; break;
                case 3: x_pos -= steps; break;
            }
        }
        
        if(y_pos > 0) printf("0 %d\n", y_pos);
        else if(y_pos < 0) printf("1 %d\n", y_pos*(-1));
            
        if(x_pos > 0) printf("2 %d\n", x_pos);
        else if(x_pos < 0) printf("3 %d\n", x_pos*(-1));
            
        if(x_pos == 0 && y_pos == 0) printf("studnia\n");
    }
    
    return 0;
}