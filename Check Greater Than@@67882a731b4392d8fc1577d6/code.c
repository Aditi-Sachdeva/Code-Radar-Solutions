#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    char z[6] = a>b?printf("True"):printf("False");
    printf("%s",z);
    return 0;
}