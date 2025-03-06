#include<math.h>
#include<stdio.h>

int UCLN(int a,int b){
    if(a==0||b==0)return a+b;
    return UCLN(b,a%b);
}

int BCNN(int a,int b){
    return (a*b)/UCLN(a,b);
}
int main(){
    int a,b;scanf("%d%d",&a,&b);
    printf("%d %d",UCLN(a,b),BCNN(a,b));
}
