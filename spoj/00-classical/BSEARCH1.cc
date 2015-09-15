#include <bits/stdc++.h>

int bsearch(int arr[], int val, int low, int high)
{
    if(val > arr[high] or val < arr[low]) return -1;
    
    while(low <= high)
    {
        int mid = (low+high) / 2;
        
        if(val < arr[mid]) high = mid-1;     // LEFT
        else if(val > arr[mid]) low = mid+1; // RIGHT
        else if(val == arr[mid])
        {
            while(val == arr[mid] && mid >= 0) mid--; // GO TO 1ST OCCURENCE
            return ++mid;
        }
    }

    return -1;
}

int main()
{
    int n, q, x, array[100001];

    scanf("%d %d", &n, &q);
    for(int i=0; i<n; i++) scanf("%d", &array[i]);
    
    while(q--)
    {
        scanf("%d", &x);
        printf("%d\n", bsearch(array, x, 0, n-1));
    }
    
    return 0;
}