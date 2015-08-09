#include <bits/stdc++.h>

int main(int argc, char *argv[])
{
    double a, b, c;
    
    scanf("%lf %lf %lf", &a, &b, &c);
    
    if(a == 0.00 and b == c) printf("NWR\n");
    else if(a == 0.00) printf("BR\n");
    else printf("%.2lf\n", (c-b)/a);    
    
    return 0;
}