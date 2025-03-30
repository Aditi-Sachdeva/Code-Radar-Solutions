#include <stdio.h>
void bubblesort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int seq(int arr[],int n){
    int length=1;
    for(int i=0;i<n-1;i++){
        if(arr[i]+1 == arr[i+1]){
            length++;
        }
    }
    return length;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bubblesort(arr,n);
    int ans = seq(arr,n);
    printf("%d",ans);
}