#include <stdio.h>
int seq(int arr[],int n){
    int length=0;
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
    int ans = seq(arr,n);
    printf("%d",ans);
}