#include <stdio.h>

int soNgayTrongThang(int thang, int nam) {
    if (thang < 1 || thang > 12)
        return -1;

    if (thang == 2) {
        if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0))
            return 29;
        else
            return 28;
    }

    if (thang == 4 || thang == 6 || thang == 9 || thang == 11)
        return 30;

    return 31;
}

int main() {
    int thang, nam;
    printf("Nhap thang va nam: ");
    scanf("%d %d", &thang, &nam);

    int ngay = soNgayTrongThang(thang, nam);
    if (ngay == -1)
        printf("Thang khong hop le.\n");
    else
        printf("Thang %d nam %d co %d ngay.\n", thang, nam, ngay);

    return 0;
}
