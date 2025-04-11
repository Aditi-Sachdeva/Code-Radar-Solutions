#include <stdio.h>
void zeroesAtEnd(int arr[],int n){
    int idx = 0;
    for(int i=0;i<n;i++){
        if(arr[i] != 0){
            arr[idx++] = arr[i];
        }
    }
    while(idx<n){
        arr[idx++]0;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    zeroesAtEnd(arr,n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

}