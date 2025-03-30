#include <stdio.h>

// Function to find unique pairs with a given sum
void findPairs(int arr[], int n, int target) {
    int found = 0; // To check if any pair is found

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                printf("(%d, %d)\n", arr[i], arr[j]);
                found = 1;
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

    // Taking input correctly
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &target);

    findPairs(arr, n, target);

    return 0;
}
