#include <stdio.h>
void freq(int arr[],int n){
    int freq[n];
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        if(freq[arr[i]] > 0){
            printf("%d %d",arr[i],freq[arr[i]]);
            freq[arr[i]] = 0;
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    freq(arr,n);
}