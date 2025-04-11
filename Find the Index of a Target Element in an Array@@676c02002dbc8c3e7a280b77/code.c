#include <stdio.h>
int search(int arr[], int n,int target){
    int low = 0;
    int high = n-1;
    int result = -1;
    while(low<=high){
        int mid = low + (high - low)/2;
        if(arr[mid] == target){
            result = mid;
            high = mid -1;
        }
        else if(arr[mid] > target){
            high = mid -1;
        }
        else{
            low = mid +1;
        }
    }
    return result;
}
int main(){
    int n,target;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&target);
    int idx = search(arr,n,target);
    printf("%d",idx);
}