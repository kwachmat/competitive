#include <iostream>
#include <string>
using namespace std;

int main()
{
    int LightX, LightY, ThorX, ThorY;
    cin >> LightX >> LightY >> ThorX >> ThorY; cin.ignore();
    
    while (1) {
        int Energy;
        cin >> Energy; cin.ignore();

        if(ThorX > LightX and ThorY > LightY) {
            cout << "NW" << endl;
            ThorX--; ThorY--;
        }
        
        else if(ThorX > LightX and ThorY == LightY) {
            cout << "W" << endl;
            ThorX--;
        }
        
        else if(ThorX > LightX and ThorY < LightY) {
            cout << "SW" << endl;
            ThorX--; ThorY++;
        }
        
        else if(ThorX == LightX and ThorY > LightY) {
            cout << "N" << endl;
            ThorY--;
        }
        
        else if(ThorX == LightX and ThorY < LightY) {
            cout << "S" << endl;
            ThorY++;
        }
        
        else if(ThorX < LightX and ThorY > LightY) {
            cout << "NE" << endl;
            ThorX++; ThorY--;
        }
        
        else if(ThorX < LightX and ThorY == LightY) {
            cout << "E" << endl;
            ThorX++;
        }
        
        else if(ThorX < LightX and ThorY < LightY) {
            cout << "SE" << endl;
            ThorX++; ThorY++;
        }
    } // -loop
}