#include <stdio.h>

void replaceWithGreatest(int arr[], int n) {
    int maxRight = -1;  // The rightmost element has no greater element, so replace it with -1.

    for (int i = n - 1; i >= 0; i--) {
        int temp = arr[i];  // Store the current value
        arr[i] = maxRight;   // Replace current with the max seen so far
        if (temp > maxRight) {
            maxRight = temp;  // Update maxRight if the current element is larger
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    replaceWithGreatest(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
