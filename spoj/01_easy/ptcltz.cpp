#include <bits/stdc++.h>

int main(int argc, char *argv[])
{
    int tests, x_value, steps;
    
    scanf("%d", &tests);
    
    while(tests--)
    {
        steps = 0;
        scanf("%d", &x_value);

        while(x_value != 1)
        {
            if(x_value % 2 == 0) x_value = x_value / 2;
            else x_value = 3*x_value + 1;

            steps++;
        }

        printf("%d\n", steps);
    }
    
    return 0;
}