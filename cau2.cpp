#include <stdio.h>
#include <math.h>

void nhapMang(int a[], int *n) {
    printf("Nhap so phan tu: ");
    scanf("%d", n);
    for(int i = 0; i < *n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void xuatMang(int a[], int n) {
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

int tongMang(int a[], int n) {
    int s = 0;
    for(int i = 0; i < n; i++) s += a[i];
    return s;
}

int demSoAm(int a[], int n) {
    int dem = 0;
    for(int i = 0; i < n; i++)
        if(a[i] < 0) dem++;
    return dem;
}

int laSoChinhPhuong(int x) {
    if(x < 0) return 0;
    int k = sqrt(x);
    return k * k == x;
}

void inSoChinhPhuong(int a[], int n) {
    for(int i = 0; i < n; i++)
        if(laSoChinhPhuong(a[i]))
            printf("%d ", a[i]);
    printf("\n");
}

float tbSoChinhPhuong(int a[], int n) {
    int s = 0, dem = 0;
    for(int i = 0; i < n; i++)
        if(laSoChinhPhuong(a[i])) {
            s += a[i];
            dem++;
        }
    if(dem == 0) return 0;
    return (float)s / dem;
}

int maxMang(int a[], int n) {
    int max = a[0];
    for(int i = 1; i < n; i++)
        if(a[i] > max) max = a[i];
    return max;
}

int minMang(int a[], int n) {
    int min = a[0];
    for(int i = 1; i < n; i++)
        if(a[i] < min) min = a[i];
    return min;
}

void inTrongKhoang(int a[], int n) {
    int min = minMang(a, n);
    int max = maxMang(a, n);
    for(int i = 0; i < n; i++)
        if(a[i] > min && a[i] < max)
            printf("%d ", a[i]);
    printf("\n");
}

int main() {
    int a[100], n;
    nhapMang(a, &n);
    xuatMang(a, n);
    printf("Tong = %d\n", tongMang(a, n));
    printf("So am = %d\n", demSoAm(a, n));
    printf("Cac so chinh phuong: ");
    inSoChinhPhuong(a, n);
    printf("TB so chinh phuong = %.2f\n", tbSoChinhPhuong(a, n));
    printf("Max = %d\n", maxMang(a, n));
    printf("Min = %d\n", minMang(a, n));
    printf("Cac so trong (min, max): ");
    inTrongKhoang(a, n);
}

