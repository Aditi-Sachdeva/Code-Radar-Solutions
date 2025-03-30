#include <stdio.h>

int maxFrequencyElement(int arr[], int n) {
    int maxCount = 0, maxElement = arr[0];

    for (int i = 0; i < n; i++) {
        int count = 0;

        // Count occurrences of arr[i]
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        // Update max frequency and element
        if (count > maxCount) {
            maxCount = count;
            maxElement = arr[i];
        }
    }

    return maxElement;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = maxFrequencyElement(arr, n);
    printf("%d\n", result);

    return 0;
}
