#include<math.h>
#include<stdio.h>

void bai1(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}

void bai2(int a[],int n){
    for(int i=n-1;i>=0;i--){
        printf("%d ",a[i]);
    }
}

int main(){
    int n;scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    printf("KET QUA BAI 1\n");
    bai1(a,n);
    printf("\n");
    printf("KET QUA BAI 2\n");
    bai2(a,n);
    return 0;
}
