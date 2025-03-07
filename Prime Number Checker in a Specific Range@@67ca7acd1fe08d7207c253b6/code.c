void printPrimesInRange(int a, int b){
    for(int num=a;num<=b;num++){
        for(int i=2;i*i<=num;i++){
            if(num%i==0){
                printf("%d ",num);
                break;
            }
        }
        printf("No prime numbers");
    }
}