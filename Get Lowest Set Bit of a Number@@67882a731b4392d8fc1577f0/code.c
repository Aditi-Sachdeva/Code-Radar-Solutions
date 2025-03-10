#include <stdio.h>
int main() {
    int num, pos = 1;
    scanf("%d", &num);
    if(num == 0) {
        printf("0");
    } else {
        while ((num & 1) == 0) {
            num >>= 1; 
            pos++;
        }
        printf("%d", pos);
    }
    return 0;
}

