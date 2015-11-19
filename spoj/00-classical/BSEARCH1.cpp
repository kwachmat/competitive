#include <iostream>
using namespace std;

int binsearch(int *tab, int n, int val) {
    int mid, b=0, e=n-1;
    if(val < tab[0] or val > tab[n-1]) return -1;
    
    while(b != e) {
        mid = (b+e) >> 1;
        (tab[mid] >= val ? e=mid : b=mid+1);
    }
    
    if(tab[b] == val) return b;
    return -1;
}

int main() {
    int n, q, x, numbers[100001];
    
    cin.tie(NULL);
    ios_base::sync_with_stdio(0);
    
    cin >> n >> q;
    for(int i=0; i<n; cin >> numbers[i++]);
    
    while(q--) {
        cin >> x;
        cout << binsearch(numbers, n, x) << "\n";
    }
    
    return 0;
}