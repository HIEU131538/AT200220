#include<math.h>
#include<stdio.h>


int fibon(int n){
    if(n==1||n==2)return 1;
    return fibon(n-1)+fibon(n-2);
}
int main(){
    int n;scanf("%d",&n);
    printf("%d",fibon(n));
}
