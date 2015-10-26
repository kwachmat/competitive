#include <cstdio>
#include <vector>
#include <cstdint>
#include <algorithm>
using namespace std;

int main() {
    
    int N, M, k;
    scanf("%d %d %d", &N, &M, &k);

    vector<int> dz(N), ch(M);
    for(int i=0; i<N; scanf("%d", &dz[i++]));
    for(int i=0; i<M; scanf("%d", &ch[i++]));
    
    sort(ch.begin(), ch.end());
    
    uint64_t sum = 0;
    for(int i=0; i<N; i++) {
        auto min_id = lower_bound(ch.begin(), ch.end(), dz[i] - k);
        auto max_id = upper_bound(ch.begin(), ch.end(), dz[i] + k);

        sum += (max_id-ch.begin()) - (min_id-ch.begin());
    }
    
    printf("%lu\n", sum);
    return 0;
}