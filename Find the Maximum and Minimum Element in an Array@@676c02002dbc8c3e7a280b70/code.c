#include <stdio.h>
int minimum(int arr[], int n){
    int min = arr[0];
    for(int i=1; i<n;i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}
int maximum(int arr[], int n){
        int max = arr[0];
    for(int i=1; i<n;i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=1; i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max = maximum(arr,n);
    int min = minimum(arr,n);
    printf("%d %d",min,max);


}
