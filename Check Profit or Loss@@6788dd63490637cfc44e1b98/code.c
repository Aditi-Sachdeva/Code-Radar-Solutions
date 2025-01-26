#include <stdio.h>
int main() {
    int p,l;
    scanf("%d %d",&p,&l);
    if(p-l>0){
        printf("Loss");
    }
    else if(p-l<0){
        printf("Profit");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}