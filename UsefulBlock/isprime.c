int isprime(int n){
    //判断数字n是不是素数
    int i;
    for(i=2;i*i<=n;i++){
        if(n%i == 0)
            return 0;
    }
    return 1;
}