//一元多项式求导
#include<stdio.h>
#define MAX 100
int main(){
    int a[MAX]; //系数
    int e[MAX]; //指数
    //输入
    int i = 0;
    int x;
    do{
        scanf("%d %d",&a[i],&e[i]);
        i++;
        x = getchar();
    }while(x!='\n');
    int len = i;    //项数
    int f = 0;      //辅助输出格式
    for(i=0;i<len;i++){
        if(a[i]==0 && e[i]==0){
            printf("0 0\n");
            return 0;
        }else{
            if(e[0]==0){
                printf("0 0\n");
                return 0;
            }else{
                if(e[i]){
                    if(f++!=0)
                        printf(" ");
                    printf("%d %d",a[i]*e[i],e[i]-1);
                }
            }
        }
    }
    printf("\n");
    return 0;
}