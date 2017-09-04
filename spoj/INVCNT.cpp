#include <bits/stdc++.h>
typedef long long ll;

int *a;
int tmp[200001];

ll merge_array(int arr[], int low, int mid, int high) {
    
    ll cnt = 0;
    int i=low, j=mid, k=low;
    
    while( (i<=mid-1) and (j<=high) ) {
        if(arr[i] <= arr[j]) tmp[k++] = arr[i++];
        else {
            tmp[k++] = arr[j++];
            cnt += (mid - i);
        }
    }
    
    while(i <= mid-1) tmp[k++] = arr[i++];
    while(j <= high) tmp[k++] = arr[j++];
    
    for(int i=low; i<=high; i++) arr[i] = tmp[i];
    return cnt;
}

ll merge_sort(int arr[], int low, int high) {
    
    int mid;
    ll count = 0;
    if(low < high) {
        mid = (low+high)/2;
        count += merge_sort(arr, low, mid);
        count += merge_sort(arr, mid+1, high);
        count += merge_array(arr, low, mid+1, high);
    }
    
    return count;
}

int main() {
    
    int t, n;
    scanf("%d", &t);
    
    while(t--) {
        scanf("%d", &n);
        a = new int [n+1];
        for(int i=0; i<n; i++) scanf("%d", &a[i]);
        
        printf("%lld\n", merge_sort(a, 0, n-1));
        delete[] a;
    }
    
    return 0;
}