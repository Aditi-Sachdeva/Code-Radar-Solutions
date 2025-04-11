#include <stdio.h>
int sumOfDigits(int n){
    int sum=0;
    while(n!=0){
        int digit = n%10;
        sum += digit;
        n/=10;
    }
    return sum;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",sumOfDigits(arr[i]));
    }
}