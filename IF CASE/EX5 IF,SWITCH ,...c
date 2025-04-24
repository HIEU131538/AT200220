#include<math.h>
#include<stdio.h>
#include<float.h>

int main(){
    double a,b,c;scanf("%lf%lf%lf",&a,&b,&c);
    double denta=(b*b)-4*a*c;
    if(a==0){
        if(b==0&&c==0)printf("PHUONG TRINH VO SO NGHIEM");
        else if(b==0)printf("PHUONG TRINH VO NGHIEM");
        else
            printf("%.4lf",-c/b);
    }
    else{
        if(denta<0){
          double x1=(-b+sqrt(fabs(denta)))/(2*a);
          double x2=(-b-sqrt(fabs(denta)))/(2*a);
          printf("%lf %lf",x1,x2);
        }
        else if(denta==0){
            double x=-b/(2*a);
            printf("PHUONG TRINH CO NGHIEM KEP: x=%.4lf",x);
        }
        else{
            double x1=(-b+sqrt(denta))/(2*a);
            double x2=(-b-sqrt(denta))/(2*a);
            printf("%.4lf %.4lf",x1, x2);
        }
    }
    return 0;
}
