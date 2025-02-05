#include <stdio.h>

int main() {
    int n,flipped;
    scanf("%d",&n);
    flipped = ~n;
    printf("%d",flipped);
    return 0;
}