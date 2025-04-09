#include <stdio.h>
#include <math.h>


float f(float t, float y) {
    return y - pow(t, 2) + 1;
}

int main() {
    float a, b, h;
    float t[100], y[100];

    printf("Where a <= t <= b\n");
    printf("Enter the value of a: ");
    scanf("%f", &a);
    printf("Enter the value of b: ");
    scanf("%f", &b);

    printf("Where Y(t0) = y0\n");
    printf("Enter the value of t0: ");
    scanf("%f", &t[0]);
    printf("Enter the value of y0: ");
    scanf("%f", &y[0]);

    printf("Enter the value of interval h: ");
    scanf("%f", &h);

    int n = (b - a) / h;

    for (int i = 0; i < n; i++) {
        t[i+1] = t[i] + h;
        y[i+1] = y[i] + h * f(t[i], y[i]);
    }

    printf("\n   t\t|\ty\n");
    printf("-------------------------\n");
    for (int i = 0; i <= n; i++) {
        printf(" %.4f\t|\t%.4f\n", t[i], y[i]);
    }

    return 0;
}
