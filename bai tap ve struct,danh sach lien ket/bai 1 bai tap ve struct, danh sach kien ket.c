#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

struct banhang{
    char ten[100];
    int dongia;
    int soluong;
    int thanhtien;
};

typedef struct banhang banhang;

void nhap(banhang *x){
    getchar();
    printf("NHAP TEN HANG : ");gets(x->ten);
    printf("NHAP DON GIA : ");scanf("%d",&x->dongia);
    printf("NHAP SO LUONG : ");scanf("%d",&x->soluong);
    x->thanhtien=x->soluong*x->dongia;
}

void in(banhang x){
    printf("%s %d %d %d\n",x.ten,x.dongia,x.soluong,x.thanhtien);
}

int cmp(const void *a,const void *b){
    banhang *x=(banhang*)a;
    banhang *y=(banhang*)b;
    return strcmp(x->ten,y->ten);
}

int main(){
    int n;
    printf("SO LUONG TEN HANG :");scanf("%d",&n);
    banhang a[n];
    while(1){
        printf("-----------SO LIEU BAN HANG----------\n\n");
        printf("1.NHAP THONG TIN VAO BO NHO !\n");
        printf("2.SO LIEU BAN HANG VUA NHAP !\n");
        printf("3.SAP XEP THEO VAN CUA TEN HANG !\n");
        printf("0.THOAT !\n");
        printf("--------------------------------------\n\n");
        int lc;printf("CHON LUA CHON : ");scanf("%d",&lc);
        if(lc==1){
            for(int i=0;i<n;i++){
                getchar();
                nhap(&a[i]);
            }
        }
        else if(lc==2){
            int tongtien=0;
            printf("\nSO LIEU BAN HANG\n");
            printf("%-4s %-12s %-10s %-10s %-10s\n", "STT", "TenHang", "DonGia", "SoLuong", "ThanhTien");

            for(int i=0;i<n;i++){
                printf("%-4d %-12s %-10d %-10d %-10d\n", i + 1, a[i].ten, a[i].dongia, a[i].soluong, a[i].thanhtien);
                tongtien+=a[i].thanhtien;
            }
            printf("TONG TIEN : %d\n",tongtien);
        }
        else if(lc==3){
            qsort(a,n,sizeof(banhang),cmp);
        }
        else if(lc==0)break;
    }

}

