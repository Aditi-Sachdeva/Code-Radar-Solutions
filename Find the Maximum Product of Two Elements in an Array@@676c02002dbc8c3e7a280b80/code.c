#include <stdio.h>

int maxProduct(int arr[], int n) {
    if (n < 2) {
        return -1;  // Not enough elements to form a product
    }

    int max1 = -__INT_MAX__, max2 = -__INT_MAX__; // Initialize with smallest integer values

    for (int i = 0; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;   // Shift max1 to max2
            max1 = arr[i]; // Update max1
        } else if (arr[i] > max2) {
            max2 = arr[i]; // Update max2 only if it's smaller than max1 but larger than previous max2
        }
    }

    return max1 * max2;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = maxProduct(arr, n);
    printf("%d\n", result);

    return 0;
}
