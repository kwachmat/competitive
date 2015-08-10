#include <iostream>
using namespace std;

int main()
{
    int maxHeight = 0, maxHeightX;

    while (1) {
        int SX, SY;
        cin >> SX >> SY; cin.ignore();
        
        for (int i = 0; i < 8; i++)
        {
            int MH;
            cin >> MH; cin.ignore();
            
            if(MH > maxHeight) {
                maxHeight = MH;
                maxHeightX = i;
                cerr << "I will shoot mt no. " << maxHeightX << endl;
            }
        }

        if(SX == maxHeightX) { cout << "FIRE" << endl; maxHeight = 0; }
        else cout << "HOLD" << endl;
    }
}