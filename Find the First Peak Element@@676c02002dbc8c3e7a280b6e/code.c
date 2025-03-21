#include <stdio.h>
int peakElement(int arr[], int n){
    int peak = arr[0];
    for(int i=1; i<n-1;i++){
        if(peak < arr[i] && arr[i] > arr[i+1]){
            peak = arr[i];
        }
    }
    return peak;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=1; i,n;i++){
        scanf("%d",&arr[i]);
    }
    int ans = peakElement(arr,n);
    printf("%d",ans);
}