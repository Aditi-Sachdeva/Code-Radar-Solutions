int fibonacciSeries(int n){
    int a=0,b=1,c;
    while(n!=0){
        c=a+b;
        printf("%d",a);
        a=b;
        b=c;
        n--;
    }
}