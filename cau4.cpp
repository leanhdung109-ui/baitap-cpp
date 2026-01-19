#include <stdio.h>
#include <string.h>
#include <ctype.h>

int demChu(const char *s) {
    int d = 0;
    for(int i = 0; s[i]; i++)
        if(isalpha(s[i])) d++;
    return d;
}

int demSo(const char *s) {
    int d = 0;
    for(int i = 0; s[i]; i++)
        if(isdigit(s[i])) d++;
    return d;
}

void doiHoaThuong(char *s) {
    for(int i = 0; s[i]; i++) {
        if(islower(s[i])) s[i] = toupper(s[i]);
        else if(isupper(s[i])) s[i] = tolower(s[i]);
    }
}

void daoNguoc(char *s) {
    int n = strlen(s);
    for(int i = 0; i < n / 2; i++) {
        char t = s[i];
        s[i] = s[n - i - 1];
        s[n - i - 1] = t;
    }
}

