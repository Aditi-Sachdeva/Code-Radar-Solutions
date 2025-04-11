#include <stdio.h>
int median(int arr[],int n){
    if(n%2 != 0){
        int mid = n/2;
        return arr[mid];
    }
    return -1;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int m = median(arr,n);
    printf("%d",m);

}