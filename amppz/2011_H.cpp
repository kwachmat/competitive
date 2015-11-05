#include <iostream>
using namespace std;

int main() {
    char lastDrink;
    int n, herb = 0;

    cin >> n;
    
    if(n == 1) cout << "HM\n";
    else
    {
        while(--n) {
            cin >> lastDrink;
            (lastDrink=='H' ? herb++ : herb--);
        }
        
        if(herb == 0) herb = (lastDrink=='H' ? -1 : 1);
        cout << (herb > 0 ? "H\n" : "M\n");
    }
    
    return 0;
}