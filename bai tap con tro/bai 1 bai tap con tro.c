#include<stdio.h>
#include<stdlib.h>


void hoandoi(int *a,int *b){
    int tmp=*a;*a=*b;*b=tmp;
}

int main(){
    int a,b;scanf("%d%d",&a,&b);
    printf("HAI SO BAN DAU :");printf("%d %d\n",a,b);
    hoandoi(&a,&b);
    printf("HAI SO LUC SAU :");printf("%d %d\n",a,b);
    return 0;

}
