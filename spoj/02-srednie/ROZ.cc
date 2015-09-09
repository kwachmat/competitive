#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(0);
    
    int houses, a, b, c, x, y, z, row1, row2, row3;
    
    cin >> houses;
    cin >> row1 >> row2 >> row3;

    while(--houses)
    {
        cin >> a >> b >> c;
        
        x = a + min(row2, row3);
        y = b + min(row1, row3);
        z = c + min(row1, row2);
        
        row1 = x;
        row2 = y;
        row3 = z;
}
    
    cout << min(row1, min(row2, row3)) << "\n";    
    return 0;
}