#include <stdio.h>
#include <limits.h>
int secondSmallest(int arr[], int n){
    if(n<2){
        return -1;
    }
    int smallest = INT_MAX;
    int second = INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i] < smallest){
            second = smallest;
            smallest = arr[i];
        }
        else if(arr[i] < second && arr[i] != smallest){
            second = arr[i];
        }
    }
    return second>INT_MAX?second:-1;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    int ans = secondSmallest(arr,n);
    printf("%d",ans);
}