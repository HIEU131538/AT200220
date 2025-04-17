#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct SV{
    char ten[100];
    int tuoi;
    double diemTB;
};

typedef struct SV SV;

void nhap(const char *filename){
    FILE *f=fopen(filename,"wb");
    if(!f){
        printf("KHONG THE HIEN THI\n");return;
    }
    int n;printf("NHAP SO SINH VIEN: ");scanf("%d",&n);
    SV a[n];
    for(int i=0;i<n;i++){
        printf("TEN: ");scanf(" %[^\n]",a[i].ten);
        printf("TUOI: ");scanf("%d",&a[i].tuoi);
        printf("DIEM TB: ");scanf("%lf",&a[i].diemTB);
    }
    fwrite(a,sizeof(SV),n,f);
    fclose(f);
    printf("DA IN\n");

}
 void hienthi(const char *filename){
    FILE *f=fopen(filename,"rb");
    if(!f){
        printf("KHONG THE IN\n");return;
    }
    SV x;
    int stt=1;
    printf("\n%-5s %-20s %-10s %-10s\n","STT","TEN","TUOI","DIEM TB");
    while(fread(&x,sizeof(SV),1,f)){
        printf("%-5d %-20s %-10d %-10.2lf\n",stt++,x.ten,x.tuoi,x.diemTB);
    }
    fclose(f);
 }

 void suathongtin(char const *filename){
     FILE *f=fopen(filename,"rb+");
     if(!f){
        printf("KHONG THE IN\n");
     }
     char name[100];
     scanf(" %[^\n]",name);
     getchar();
     SV x;
     int found =0;
     while(fread(&x,sizeof(SV),1,f)){
        if(strcmp(name,x.ten)==0){
            printf("TUOI MOI: ");scanf("%d",&x.tuoi);
            printf("DIEM TB MOI: ");scanf("%lf",&x.diemTB);
            fseek(f,-sizeof(SV),SEEK_CUR);
            fwrite(&x,sizeof(SV),1,f);
            found=1;break;

        }
     }
     if(!found){
        printf("KHONG TIM THAY\n");
     }
     fclose(f);
 }

 void themvaocuoi(const char *filename){
        FILE *f=fopen(filename,"rb+");
        SV x;
        printf("TEN: ");scanf(" %[^\n]",x.ten);
        printf("TUOI: ");scanf("%d",&x.tuoi);
        printf("DIEM TB: ");scanf("%lf",&x.diemTB);
        fseek(f,0,SEEK_END);
        fwrite(&x,sizeof(SV),1,f);
        fclose(f);
 }

 int main(){
   const char *filename="DSACH.C";
   while(1){
    printf("\n----------------\n");
    printf("1.NHAP DANH SACH\n");
    printf("2.IN DANH SACH\n");
    printf("3.THEM VAO CUOI\n");
    printf("4.SUA THONG TIN\n");
    printf("5.THOAT\n");
    printf("\n--------------------\n");
    int lc;printf("LUA CHON: ");scanf("%d",&lc);
    if(lc==1){
        nhap(filename);
    }
    else if(lc==2){
        hienthi(filename);
    }
    else if(lc==3){
        themvaocuoi(filename);
    }
    else if(lc==4){
        suathongtin(filename);
    }
    else{
        break;
    }
   }
   return 0;
 }
