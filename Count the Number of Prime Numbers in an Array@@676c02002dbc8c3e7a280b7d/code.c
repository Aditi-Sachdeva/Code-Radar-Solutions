#include <stdio.h>
int isPrime(int n){
    int count=0;
    if(n<1){
        return 0;
    }
    for(int i=2;i*i<=n;i++){
        if(n % i == 0){
            count++;
            break;
        }
    }
    if(count == 0){
        return 1;
    }
    return 0;
}
int main(){
    int n,count=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(isPrime){
            count++;
        }
    }
    printf("%d",count);
}