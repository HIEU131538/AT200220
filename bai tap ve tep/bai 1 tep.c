#include<stdio.h>

int main(){
    int a[100][100],b[100][100],c[100][100];
    int n,m;
    printf("NHAP SO DONG,COT: ");
    scanf("%d%d",&n,&m);
    printf("NHAP MA TRAN: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("NHAP MA TRAN B: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&b[i][j]);
        }
    }
    FILE *f;f=fopen("CONG_MT.C","w");
    fprintf(f,"Ma tran tong:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            c[i][j]=a[i][j]+b[i][j];
            fprintf(f,"%d ",c[i][j]);
        }
        fprintf(f,"\n");
    }
    fclose(f);
    printf("DA HOAN THANH\n");
    return 0;

}
