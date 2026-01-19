#include <stdio.h>
#include <stdlib.h>

void nhap(int **a, int *n) {
    printf("Nhap n: ");
    scanf("%d", n);
    *a = (int*)malloc(*n * sizeof(int));
    for(int i = 0; i < *n; i++)
        scanf("%d", &(*a)[i]);
}

void xoaViTri(int **a, int *n, int k) {
    for(int i = k; i < *n - 1; i++)
        (*a)[i] = (*a)[i + 1];
    (*n)--;
    *a = (int*)realloc(*a, *n * sizeof(int));
}

