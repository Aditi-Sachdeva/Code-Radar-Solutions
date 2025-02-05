#include <stdio.h>

int main() {
    int a,b,bit;
    scanf("%d %d",&a,&b);
    bit = (a >> b) & 1;
    printf("%d",bit);
    return 0;
}