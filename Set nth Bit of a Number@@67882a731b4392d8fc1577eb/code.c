#include <stdio.h>

int main() {
    int n,b;
    scanf("%d %d",&n,&b);
    int result = n | (1<<b);
    printf("%d",result);
    return 0;
}