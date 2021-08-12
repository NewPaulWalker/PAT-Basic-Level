//素数对猜想
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int prime[n];   //算出n个数中的素数
    int num = 0;    //记录素数个数
    int i;          //扫描数
    for(i=2;i<=n;i++){
        if(isprime(i)){
            prime[num++] = i;
        }
    }
    int count = 0;
    int j;
    for(j=0;j<num;j++){
        if(prime[j+1] - prime[j] == 2)
            count++;
    }
    printf("%d\n",count);
    return 0;
}
int isprime(int x){
    int i;
    for(i=2;i*i<=x;i++){
        if(x%i == 0)
            return 0;
    }
    return 1;
}