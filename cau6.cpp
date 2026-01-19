#include <stdio.h>
#include <string.h>

struct SinhVien {
    char maSV[20];
    char hoTen[50];
    char lop[20];
    float diem;
};

void nhapSV(SinhVien &sv) {
    fflush(stdin);
    gets(sv.maSV);
    gets(sv.hoTen);
    gets(sv.lop);
    scanf("%f", &sv.diem);
}

