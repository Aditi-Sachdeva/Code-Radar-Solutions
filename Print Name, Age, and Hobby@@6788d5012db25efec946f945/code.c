#include <stdio.h>

int main() {
    char a[25];
    int b;
    char c[25];
    scanf("%s %d",&a,&b);
    scanf("%s",&c);
    printf("Name: %s\n",a);
    printf("Age: %d\n",b);
    printf("Hobby: %s\n",c);
    return 0;
}