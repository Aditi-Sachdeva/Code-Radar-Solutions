#include <stdio.h>
#include <limits.h> // For INT_MAX and INT_MIN

void findMinDiffPair(int arr[], int n) {
    if (n < 2) {
        printf("-1");
        return;
    }
    int min1 = INT_MAX, min2 = INT_MAX;
    int max1 = INT_MIN, max2 = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] < min1) {
            min2 = min1;
            min1 = arr[i];
        } else if (arr[i] < min2) {
            min2 = arr[i];
        }

        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2) {
            max2 = arr[i];
        }
    }

    // Find the pair with the smallest difference
    int diffMin = min2 - min1;
    int diffMax = max1 - max2;

    if (diffMin <= diffMax )
        printf("%d %d\n", min1, min2);
    else
        printf("%d %d\n", max2, max1);
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
