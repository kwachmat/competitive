#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    ios_base::sync_with_stdio(false);

    int days;
    cin >> days;
    vector<pair<int,int> > tasks(days);

    for(int i=0; i<days; ++i) {
        cin >> tasks[i].second >> tasks[i].first;
    }

    sort(tasks.rbegin(), tasks.rend());

    int answer = tasks[0].first;
    for(int i=0; i<tasks.size(); ++i) {
        answer = min(answer, tasks[i].first) - tasks[i].second;
    }

    cout << answer;
    return 0;
}

