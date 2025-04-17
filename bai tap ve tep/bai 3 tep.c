#include<stdio.h>
#include<math.h>
#include<string.h>

struct HANG{
    char ten[100];
    int dongia;
    int soluong;
    int thanhtien;
};

typedef struct HANG HANG;

int main(){
    FILE *f;
    printf("SO LUONG HANG: ");int n;scanf("%d",&n);
    HANG a[n];
    for(int i=0;i<n;i++){
        printf("NHAP TEN HANG: ");scanf(" %[^\n]",a[i].ten);
        printf("NHAP DON GIA: ");scanf("%d",&a[i].dongia);
        printf("NHAP SO LUONG: ");scanf("%d",&a[i].soluong);
        a[i].thanhtien=a[i].soluong*a[i].dongia;
    }
    f=fopen("SO_LIEU.C","wb");
    fwrite(a,sizeof(HANG),n,f);
    fclose(f);
    f=fopen("SO_LIEU.C","rb");
    HANG x;
    int stt=1;
    long long tong=0;
    printf("\n%-5s %-20s %-10s %-10s %-10s\n","STT","TEN HANG","DON GIA","SO LUONG","THANH TIEN");
    while(fread(&x,sizeof(HANG),1,f)){
        printf("%-5d %-20s %-10d %-10d %-10d\n",stt++,x.ten,x.dongia,x.soluong,x.thanhtien);
        tong+=x.thanhtien;
    }
    printf("TONG TIEN: %lld", tong);
    fclose(f);
    return 0;
}





