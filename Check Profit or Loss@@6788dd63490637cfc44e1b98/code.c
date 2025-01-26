#include <stdio.h>
int main() {
    int p,l;
    scanf("%d %d",&p,&l);
    if(p-l>0){
        printf("Loss");
    }
    else{
        printf("Profit");
    }
    return 0;
}