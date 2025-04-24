#include <stdio.h>
#include <math.h>

// Hàm kiểm tra loại tam giác
int checktamgiac(int a, int b, int c) {
    if (a + b <= c || a + c <= b || b + c <= a) return 0; // Không phải tam giác
    if (a == b && b == c) return 3; // Tam giác đều
    if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
        if (a == b || b == c || c == a) return 2; // Tam giác vuông cân
        return 4; // Tam giác vuông
    }
    if (a == b || b == c || c == a) return 1; // Tam giác cân
    return 5; // Tam giác thường
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int type = checktamgiac(a, b, c); // Gọi một lần duy nhất

    if (type == 0) {
        printf("KHONG CO TAM GIAC\n");
        return 0;
    }

    // In loại tam giác
    if (type == 1) printf("TAM GIAC CAN\n");
    else if (type == 2) printf("TAM GIAC VUONG CAN\n");
    else if (type == 3) printf("TAM GIAC DEU\n");
    else if (type == 4) printf("TAM GIAC VUONG\n");
    else printf("TAM GIAC THUONG\n");

    // Tính chu vi
    int chuvi = a + b + c;
    printf("Chu vi: %d\n", chuvi);

    // Tính diện tích bằng công thức Heron
    double p = chuvi / 2.0;
    double dientich = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("Dien tich: %.4lf\n", dientich);

    return 0;
}
