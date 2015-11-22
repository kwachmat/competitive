int main() {
    
    int x = 5;
    for(int year=2014; year<2114; year++, x--)
    {
        if(year%4==0 && year!=2100) x--;
        
        if(x <= 0) x+= 7;
        printf("%d %d\n", x, x+1);
    }
    
    return 0;
}