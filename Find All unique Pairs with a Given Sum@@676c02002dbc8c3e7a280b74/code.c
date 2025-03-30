#include <stdio.h>

// Function to find unique pairs with a given sum
void findUniquePairs(int arr[], int n, int target) {
    int found = 0; 

    for (int i = 0; i < n - 1; i++) {
        // Skip duplicate elements
        if (i > 0 && arr[i] == arr[i - 1]) {
            continue;
        }
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                printf("%d %d\n", arr[i], arr[j]);
                found = 1;
                break;  // Only print the first occurrence
            }
        }
    }

    if (!found) {
        printf("No pairs found\n");
    }
}

int main() {
    int n, target;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &target);

    findUniquePairs(arr, n, target);

    return 0;
}
