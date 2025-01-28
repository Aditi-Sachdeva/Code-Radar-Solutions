#include <stdio.h>

int main() {
    int a;
    int count = 0;
    scanf("%d",&a);
    for(int i = 2;i*i<a;i++){
        if(a % i == 0  ){
            count++;
            break;
        }
    }
    if(count == 0){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}