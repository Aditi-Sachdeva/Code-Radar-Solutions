void printPrimesInRange(int a, int b){
    int prime = 0;
    for(int num=a;num<=b;num++){
        int count=0;
        if(num<2){
            continue;
        }
        for(int i=2;i*i<=num;i++){
            if(num%i==0){
                count++;
                break;
            }
        }
        if(count==0){
            printf("%d ",num);
            prime=1;
        }
    }
    if(!prime){
        printf("No prime numbers");
    }
}