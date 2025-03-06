#include<math.h>
#include<stdio.h>


int tong(int n){
    int sum=0;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            sum+=i;
            if(i!=(n/i)){
                sum+=(n/i);
            }
        }
    }
    return sum;
}

int main(){
    int n;scanf("%d",&n);
    printf("KET QUA BAI 6.2 LA :");
    if(tong(n)==2*n)printf("LA SO HOAN HAO\n");
    else printf("NO\n");

    double S=0;
    for(int i=1;i<=n;i++){
        S+=(1.0/i);
    }
    printf("KET QUA BAI 7 LA :");
    printf("%.4lf",S);


    return 0;
}

