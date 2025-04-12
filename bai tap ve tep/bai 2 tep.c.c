#include<stdio.h>

int main(){
    int a[100][100],b[100][100],c[100][100];
    int n,p,m;
    scanf("%d%d%d",&n,&p,&m);
    printf("NHAP MA TRAN A: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("NHAP MA TRAN B: \n");
    for(int i=0;i<p;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&b[i][j]);
        }
    }
    FILE *f;f=fopen("CONG_MT.C","w");
    fprintf(f,"Ma tran tich:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            for(int k=0;k<p;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
            fprintf(f,"%d ",c[i][j]);
        }
        fprintf(f,"\n");
    }
    fclose(f);
    printf("DA HOAN THANH\n");
    return 0;

}
