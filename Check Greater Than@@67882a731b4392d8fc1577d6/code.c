#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    char z[] = a>b?True:False;
    printf("%s",z);
    return 0;
}