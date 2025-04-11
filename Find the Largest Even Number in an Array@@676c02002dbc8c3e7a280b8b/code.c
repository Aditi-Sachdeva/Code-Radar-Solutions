#include <stdio.h>
int maxEven(int arr[],int n){
    int max =-1;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0 ){
            if(max == -1 || arr[i]>max){
                max = arr[i];
            }
        }
    }
    return max;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int maximum = maxEven(arr,n);
    printf("%d",maximum);
}