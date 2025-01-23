#include <stdio.h>

int main() {
    char a;
    scanf("%c",&a);
    if('A'<=a && a<='Z'){
        printf("Uppercase");
    }
    else if('a'<=a && a<='z'){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}