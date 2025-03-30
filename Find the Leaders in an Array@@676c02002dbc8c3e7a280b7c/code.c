#include <stdio.h>

void findLeaders(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int isLeader = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] <= arr[j]) {
                isLeader = 0;
                break;
            }
        }
        if (isLeader) {
            printf("%d ", arr[i]);
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

    findLeaders(arr, n);

    return 0;
}
