#include <stdio.h>
int isPalindrome(int arr[], int n){
    int palindrome=1;
    for(int i=0;i<n/2;i++){
        if(arr[i] != arr[n-i-1]){
            palindrome=0;
            break;
        }
    }
    return palindrome;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int p = isPalindrome(arr,n);
    if(p){
        printf("YES");
    }
    else{
        printf("NO");
    }
}