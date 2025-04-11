#include <stdio.h>
int dulpicate(int arr[],int n){
    for(int i=0;i<n;i++){
        int isDuplicate=0;
        for(int j=1;j<=i;j++){
            if(arr[i] == arr[j]){
                isDuplicate=1;
                return arr[i];
            }
        }
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
    int d = dulpicate(arr,n);
    printf("%d",d);
}