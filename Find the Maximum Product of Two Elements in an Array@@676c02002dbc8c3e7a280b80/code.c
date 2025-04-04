#include <stdio.h>
#include <limits.h> 
int maxProduct(int arr[], int n) {
    if (n < 2) {
        return -1; 
    }

    int max1 = INT_MIN, max2 = INT_MIN;  
    int min1 = INT_MAX, min2 = INT_MAX;  

    for (int i = 0; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2) {
            max2 = arr[i];
        }

        if (arr[i] < min1) {
            min2 = min1;
            min1 = arr[i];
        } else if (arr[i] < min2) {
            min2 = arr[i];
        }
    }

    int product1 = max1 * max2;
    int product2 = min1 * min2;
    
    return (product1 > product2) ? product1 : product2;
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
