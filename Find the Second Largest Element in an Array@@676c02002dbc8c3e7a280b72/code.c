#include <stdio.h>
#include <limits.h>
int secondLargest(int arr[], int n){
    if(n<2){
        return -1;
    }
    int largest = INT_MIN;
    int second = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i] > largest){
            second = largest;
            largest = arr[i];
        }
        else if(arr[i] > second && arr[i] != largest){
            second = arr[i];
        }
    }
    return second;
    // return second>INT_MIN?second:-1;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    int ans = secondLargest(arr,n);
    printf("%d",ans);
}