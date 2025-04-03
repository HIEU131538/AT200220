#include<stdio.h>
#include<math.h>

int main(){
    int nam=2014;
    double GDP,RATE;// doi sang dang thap phan luon nha thay..VD 8%=0,08
    scanf("%lf %lf",&GDP,&RATE);
    RATE=1+RATE;
    double tmp=GDP;
    while(GDP<=2*tmp){
        printf("%d    %.2lf\n",nam,GDP);
        GDP *=RATE;
        ++nam;
    }
    return 0;

}
