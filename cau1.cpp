#include <iostream>
#include <cmath>
using namespace std;

// 1. S = 1 + 1/2 + 1/3 + ... + 1/n
double S1(int n) {
    double s = 0;
    for(int i = 1; i <= n; i++)
        s += 1.0 / i;
    return s;
}

// 2. S = 1/2 + 1/4 + ... + 1/(2n)
double S2(int n) {
    double s = 0;
    for(int i = 1; i <= n; i++)
        s += 1.0 / (2 * i);
    return s;
}

// 3. S = 1 + 3 + 6 + 9 + ... + 3n
int S3(int n) {
    int s = 0;
    for(int i = 1; i <= n; i++)
        s += 3 * i;
    return s;
}

// 4. S = 1 + 3 + 5 + ... + (2n + 1)
int S4(int n) {
    int s = 0;
    for(int i = 0; i <= n; i++)
        s += 2 * i + 1;
    return s;
}

// 5. S = 1 + x + x^2 + x^3 + ... + x^n
double S5(int n, double x) {
    double s = 1;
    double p = 1;
    for(int i = 1; i <= n; i++) {
        p *= x;
        s += p;
    }
    return s;
}

// Hàm tính giai th?a
long long gt(int n) {
    long long f = 1;
    for(int i = 1; i <= n; i++)
        f *= i;
    return f;
}

// 6. S = 1 - x^2/2! + x^4/4! - ... + (-1)^n * x^(2n)/(2n)!
double S6(int n, double x) {
    double s = 1;
    for(int i = 1; i <= n; i++) {
        double term = pow(x, 2 * i) / gt(2 * i);
        if(i % 2 == 1) s -= term;
        else s += term;
    }
    return s;
}

// 7. S = 1 + x/1! + x^2/2! + ... + x^n/n!
double S7(int n, double x) {
    double s = 1;
    for(int i = 1; i <= n; i++)
        s += pow(x, i) / gt(i);
    return s;
}

int main() {
    int n;
    double x;

    cout << "Nhap n: ";
    cin >> n;
    cout << "Nhap x: ";
    cin >> x;

    cout << "S1 = " << S1(n) << endl;
    cout << "S2 = " << S2(n) << endl;
    cout << "S3 = " << S3(n) << endl;
    cout << "S4 = " << S4(n) << endl;
    cout << "S5 = " << S5(n, x) << endl;
    cout << "S6 = " << S6(n, x) << endl;
    cout << "S7 = " << S7(n, x) << endl;

    system("pause");
    return 0;
}

