int findUnsortedSubarray(int arr[], int n) {
    int l = 0, r = n - 1;
    while (l < n - 1 && arr[l] <= arr[l + 1]) {
        l++;
    }
    if (l == n - 1) {
        return 0;
    }
    while (r > 0 && arr[r] >= arr[r - 1]) {
        r--;
    }
    int minVal = arr[l], maxVal = arr[l];
    for (int i = l; i <= r; i++) {
        if (arr[i] < minVal) minVal = arr[i];
        if (arr[i] > maxVal) maxVal = arr[i];
    }
    while (l > 0 && arr[l - 1] > minVal) {
        l--;
    }
    while (r < n - 1 && arr[r + 1] < maxVal) {
        r++;
    }
    return r - l + 1;
}
