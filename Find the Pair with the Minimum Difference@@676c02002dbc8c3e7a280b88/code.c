#include <stdio.h>
#include <stdlib.h>

void findMinDiffPair(int arr[], int n) {
    if (n < 2) {
        printf("Array should have at least two elements.\n");
        return;
    }

    int minDiff = abs(arr[1] - arr[0]);
    int pair1 = arr[0], pair2 = arr[1];

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int diff = abs(arr[i] - arr[j]);
            if (diff < minDiff) {
                minDiff = diff;
                pair1 = arr[i];
                pair2 = arr[j];
            }
        }
    }

    printf("Pair with minimum difference: %d and %d\n", pair1, pair2);
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    findMinDiffPair(arr, n);
    return 0;
}
