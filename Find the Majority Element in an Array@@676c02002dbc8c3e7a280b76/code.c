#include <stdio.h>
int majorityElement(int arr[], int n){
    int m = -1;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count >n/2){
            m = arr[i];
            return m;
        }
    }
    return m;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    int c = majorityElement(arr,n);
    printf("%d",c);
}