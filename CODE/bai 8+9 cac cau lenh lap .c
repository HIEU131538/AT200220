#include<math.h>
#include<stdio.h>

long long giaithua(long long n){
    long long des=1;
    for(int i=2;i<=n;i++){
        des*=i;
    }
    return des;
}


int main(){
    long long n;scanf("%lld",&n);
    printf("KET QUA BAI 8 LA : %lld\n",giaithua(n));
    double tong=0;
    for(int i=1;i<=n;i++){
            tong+=1.0/giaithua(i);
    }
    printf("KET QUA BAI 9 LA : %.4lf",tong);
    return 0;
}
