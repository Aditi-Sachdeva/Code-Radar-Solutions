#include <stdio.h>

int main() {
    int n,pos;
    scanf("%d %d",&n,&pos);
    n = n &~(1<<pos);
    printf("%d",n);
    return 0;
}