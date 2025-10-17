// Q71. FIND PIVOT ELEMENT OF A SORTED AND ROTATED ARRAY USING BINARY SEARCH

#include <stdio.h>

int find_pivot(int arr[], int n) {
    int low = 0, high = n - 1;

    if (n == 0) return -1;
    if (arr[low] <= arr[high]) // not rotated
        return -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (mid < high && arr[mid] > arr[mid + 1])
            return mid + 1;              // pivot is mid+1
        if (mid > low && arr[mid] < arr[mid - 1])
            return mid;                  // pivot is mid

        // Decide which half to go
        if (arr[mid] >= arr[low])
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

int main() {
    int n, i;
    int arr[100];

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid size.\n");
        return 0;
    }

    printf("Enter %d sorted-rotated elements:\n", n);
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);

    int p = find_pivot(arr, n);
    if (p == -1)
        printf("No pivot found (array not rotated or single increasing sequence).\n");
    else
        printf("Pivot index = %d, Pivot element = %d\n", p, arr[p]);

    return 0;
}

