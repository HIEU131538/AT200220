#include<stdio.h>
#include<math.h>

int main(){
    int thang;scanf("%d",&thang);
    double tien;scanf("%lf",&tien);
    double tongtien;
    for(int i=1;i<=thang;i++){
        tien+=tien*0.0045;
    }
    printf("SO TIEN CO DUOC SAU %d là : %.2lf",thang,tien);
    return 0;
}
