#include <stdio.h>
int perfectNumber(int n) {
    if (n <= 1) return 0;
    int sum = 1;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            if (i != n / i) {
                sum += n / i;
            }
        }
    }
    return sum == n;
}
int main() {
    int a, b;
    printf("Nhap so thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so thu hai: ");
    scanf("%d", &b);
    if (perfectNumber(a)) {
        printf("%d la so hoan hao.\n", a);
    } else {
        printf("%d khong phai la so hoan hao.\n", a);
    }
    if (perfectNumber(b)) {
        printf("%d la so hoan hao.\n", b);
    } else {
        printf("%d khong phai la so hoan hao.\n", b);
    }
    return 0;
}

