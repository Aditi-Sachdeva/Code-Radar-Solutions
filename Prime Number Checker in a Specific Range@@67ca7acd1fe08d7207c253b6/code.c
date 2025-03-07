void printPrimesInRange(int a, int b){
    for(int num=a;num<=b;num++){
        for(int i=2;i<=num;i++){
            if(num%i==0){
                printf("%d ",num);
            }
            else{
                printf("No prime numbers");
            }
        }
    }
}