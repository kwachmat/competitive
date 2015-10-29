#include <stack>
#include <string>
#include <iostream>
using namespace std;

inline char getOpening(char c) { return (c == ')' ? '(' : (c == ']' ? '[' : '{')); }
inline char getClosing(char c) { return (c == '(' ? ')' : (c == '[' ? ']' : '}')); }

int main() {
    
    stack<char> S;
    string str, Q = "";
    ios_base::sync_with_stdio(0);
    
    cin >> str;
    
    for(char c : str) 
    {
        if(c == ')' or c == ']' or c == '}')
        {
            if(S.empty()) Q = getOpening(c) + Q;
            else if(S.top() == getOpening(c)) S.pop();
            else {
                cout << "NIE\n";
                return 0;
            }
        }
        else S.push(c);
    }
    
    // out
   for(char c : Q) cout << c;
    cout << str;
    while(!S.empty()) { cout << getClosing(S.top()); S.pop(); }
    
    cout << "\n";
    return 0;
}   