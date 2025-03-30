#include <stdio.h>
void sort(int arr,int n){
    for(int i=1;i<n-1;i++){
        for(int j=1;j<n-i-1;j++){
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
    for(int i=1;i<n;i++){
        if(arr[i] == (arr[i+1]+1)){
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
        scanf("%d ",&arr[i]);
    }
    sort(arr,n);
    int ans = seq(arr,n);
    printf("%d",ans);
}