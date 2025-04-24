#include<math.h>
#include<stdio.h>

int main(){
    int n;scanf("%d",&n);
    if(n<5)printf("YEU");
    else if(n>=5&&n<7)printf("TRUNG BINH");
    else if(n>=7&&n<8)printf("KHA");
    else if(n>=8&&n<9)printf("GIOI");
    else printf("XUAT SAC");
    return 0;
}
