int isPrime(int num){
    int count=0;
    if(num<2){
        return 0;
    }
    for(int i = 2;i*i<=num;i++){
        if(num%i==0){
            count++;
            break;
        }
    }
    if(count==0){
        return 1;
    }
    else{
        return 0;
    }
}