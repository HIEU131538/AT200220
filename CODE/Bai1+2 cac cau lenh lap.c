#include<math.h>
#include<stdio.h>

int tong(int a[],int n){
    int tong=0;
    for(int i=0;i<n;i++){
        tong+=a[i];
    }
    return tong;

}

void checknt(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            printf("NO");
        }
    }
    printf("YES");
}

int main(){
    int n,x;scanf("%d%d",&n,&x);
    int a[n];
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    printf("KET QUA BAI 1 : %d",tong(a,n));
    checknt(x);
    return 0;
}
