#include<math.h>
#include<stdio.h>

long long gt(long long n){
    long long res=1;
    for(int i=1;i<=n;i++){
        res*=i;
    }
    return res;
}

int main(){
    double EPS,x;scanf("%lf%lf",&EPS,&x);// coi nhu x la radian roi nha
    int n=1;
    double term=x;
    double sinx=x;
    while(fabs(term)>EPS){

        term=(pow(-1,n)*pow(x,2*n+1))/gt(2*n+1);
        sinx+=term;
        n++;
    }
    printf("%.4lf",sinx);
}
