#include <set>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool tryRemove(multiset<int> &multi, int val) {
    auto it = multi.lower_bound(val);
    if(it == multi.end()) { return false; }

    multi.erase(it);
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;

    vector<int> days;
    multiset<int> colors;

    while(n--) {
        int val;
        cin >> val;
        days.push_back(val);
    }

    while(k--) {
        int val;
        cin >> val;
        colors.insert(val);
    }

    int answer(0);
    sort(days.rbegin(), days.rend());

    for(int &count : days) {
        if(not tryRemove(colors, 5*count)) {
            if(not tryRemove(colors, 2*count) and not tryRemove(colors, 3*count)) {
                cout << "NIE"; return 0;
            }
            else answer += 2;
        }
        else ++answer;
    }

    cout << answer;
    return 0;
}

