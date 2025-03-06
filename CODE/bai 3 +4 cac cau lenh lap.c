#include<math.h>
#include<stdio.h>


int main(){
    printf("KET QUA BAI 3 LA : ");
    for(int i=1;i<=20;i++){
        if(i%2==0)printf("%d ",i);
    }
    printf("\n");
    printf("KET QUA BAI 4 LA : ");
    int tong=0;
    for(int i=1;i<=100;i++){
        if(i%2==1)tong+=i;
    }
    printf("%d",tong);
    return 0;

}

