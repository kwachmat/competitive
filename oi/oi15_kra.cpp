#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, rurka;
    static int min[300001];
    
    scanf("%d %d", &n, &m);

    int ostatni = n+1;
    scanf("%d", &min[0]); // min[0] = r[0];

    // minim array
    for(int i=1; i<n; i++) {
        scanf("%d", &rurka);
        min[i] = (min[i-1]<rurka ? min[i-1] : rurka);
    }
    
    // for each roller
    for(int j=0; j<m; j++) {
        
        int a = ostatni-1;
        scanf("%d", &rurka);
        
        if(rurka > min[0]) { ostatni = 0; break; }
        
        while(a >= 0 and (rurka > min[a])) a--; 
        ostatni = a;
        
        if(ostatni == 0) break;
    }
    
    if(ostatni == 0) printf("0\n");
    else printf("%d\n", ostatni+1);
    
    return 0;
}


