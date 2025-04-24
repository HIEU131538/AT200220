#include<math.h>
#include<stdio.h>

int main(){
    double a,b,c,d,e,f;scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f);
    double D=a*e-b*d,Dx=c*e-b*f,Dy=a*f-c*d;
    if(D==0){
        if(Dx==0&&Dy==0)printf("HE CO VO SO NGHIEM");
        else printf("HE VO NGHIEM");
    }
    else{
        printf("%.4lf %.4lf",(Dx/D),(Dy/D));
    }
    return 0;
}
