#include <stdio.h>
int missing(int arr[],int n){
    if(n<1){
        return 1;
    }
    if(n==1 && arr[0] != 1){
        return 1;
    }
    return n;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int ans = missing(arr,n);
    printf("%d",ans);
}