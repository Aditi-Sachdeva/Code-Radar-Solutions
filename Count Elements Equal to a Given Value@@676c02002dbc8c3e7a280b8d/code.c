#include <stdio.h>
int countElement(int arr[],int n,int k){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i] == k){
            count++;
        }
    }
    return count;
}
int main(){
    int n,k;
    scanf("%d",&n);
    scanf("%d",&k);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int c = countElement(arr,n,k);
    printf("%d",c);
}