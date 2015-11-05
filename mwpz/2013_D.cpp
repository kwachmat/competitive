int main() {
    
    int x = 5;
    for(int rok=2014; rok<2114; rok++, x--)
    {
        if(rok%4==0 && rok!=2100) x--;
        
        if(x <= 0) x+= 7;
        printf("%d %d\n", x, x+1);
    }
    
    return 0;
}