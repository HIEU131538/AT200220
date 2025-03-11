#include<math.h>
#include<stdio.h>

int main(){
    int n;scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    long long tong=0;
    for(int i=0;i<n;i++){
        tong +=a[i];
    }
    long long tongnd=0,tongna=0;
    int demnd=0,demna=0;
    for(int i=0;i<n;i++){
        if(a[i]>0){
            ++demnd;
            tongnd+=a[i];
        }
        if(a[i]<0){
            ++demna;
            tongna+=a[i];
        }
    }
    printf("TONG CUA TAT CA CAC SO TRONG MANG LA : %lld\n",tong);
    printf("TONG CAC SO NGUYEN DUONG LA : %lld\n",tongnd);
    printf("TONG CAC SO NGUYEN AM LA : %lld\n",tongna);
    printf("TRUNG BINH CONG CUA CA MANG LA : %.4lf\n",1.0*tong/n);
    printf("TRUNG BINH CONG CUA CAC SO NGUYEN DUONG : %.4lf\n",1.0*tongnd/demnd);
    printf("TRUNG BINH CONG CUA CAC SO NGUYEN AM : %.4lf\n",1.0*tongnd/demna);
    return 0;
}
