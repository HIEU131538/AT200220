#include<math.h>
#include<stdio.h>

void mu(int x){
    printf("KET QUA BAI 1 LA : %d %d %d",x*x,x*x*x,x*x*x*x);
}

int main(){
    int n;scanf("%d",&n);
    int ngay,thang,nam;scanf("%d%d%d",&ngay,&thang,&nam);
    int a,b;scanf("%d%d",&a,&b);
    mu(n);
    printf("\n");
    printf("KET QUA BAI 2 : HOM NAY LA NGAY : %d/%d/%d\n",ngay,thang,nam);
    printf("KET QUA BAI 3 LA : ");
    printf("CONG: %d ",a+b);
    printf("TRU: %d ",a-b);
    printf("NHAN: %lld ",a*b);
    printf("CHIA: %.4lf",1.0*a/b);
    return 0;

}
