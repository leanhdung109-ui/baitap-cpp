#include <stdio.h>
#include <math.h>

int laSoChinhPhuong(int x) {
    if(x < 0) return 0;
    int k = sqrt(x);
    return k * k == x;
}

int laUoc150(int x) {
    return x != 0 && 150 % x == 0;
}

void nhapMT(int a[50][50], int n) {
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
}

void xuatMT(int a[50][50], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++)
            printf("%4d", a[i][j]);
        printf("\n");
    }
}

int tongMT(int a[50][50], int n) {
    int s = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            s += a[i][j];
    return s;
}

int maxHangK(int a[50][50], int n, int k) {
    int max = a[k][0];
    for(int j = 1; j < n; j++)
        if(a[k][j] > max) max = a[k][j];
    return max;
}

int demAmCotK(int a[50][50], int n, int k) {
    int dem = 0;
    for(int i = 0; i < n; i++)
        if(a[i][k] < 0) dem++;
    return dem;
}

void inCPDuongCheoChinh(int a[50][50], int n) {
    for(int i = 0; i < n; i++)
        if(laSoChinhPhuong(a[i][i]))
            printf("%d ", a[i][i]);
    printf("\n");
}

float tbUoc150CheoPhu(int a[50][50], int n) {
    int s = 0, dem = 0;
    for(int i = 0; i < n; i++) {
        int x = a[i][n - 1 - i];
        if(laUoc150(x)) {
            s += x;
            dem++;
        }
    }
    return dem == 0 ? 0 : (float)s / dem;
}

void sapXepGiam(int a[50][50], int n) {
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n - 1; j++)
            for(int k = j + 1; k < n; k++)
                if(a[i][j] < a[i][k]) {
                    int t = a[i][j];
                    a[i][j] = a[i][k];
                    a[i][k] = t;
                }
}

