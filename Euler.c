#include <stdio.h>
#include <math.h>

// Define the function f(t, y) = y - t^2 + 1
float f(float t, float y) {
    return y - pow(t, 2) + 1;
}

int main() {
    float a, b, h;
    float t[100], y[100];

    // Ask user for the range [a, b] for t
    printf("Where a <= t <= b\n");
    printf("Enter the value of a : ");
    scanf("%f", &a);
    printf("Enter the value of b : ");
    scanf("%f", &b);

    // Ask for the initial conditions: t0 and y0
    printf("\nWhere Y(t0) = y0\n");
    printf("Enter the value of t0 : ");
    scanf("%f", &t[0]);
    printf("Enter the value of y0 : ");
    scanf("%f", &y[0]);

    // Ask for the interval size h
    printf("\nEnter the value of interval h : ");
    scanf("%f", &h);

    // Calculate the number of steps n based on the interval and range
    int n = round((b - a) / h);

    // Euler's method loop
    for (int i = 0; i < n; i++) {
        // Calculate the next value of t and y
        t[i + 1] = t[i] + h;
        y[i + 1] = y[i] + h * f(t[i], y[i]);  // Euler's update step
    }

    // Print the results in a table format
    printf("\n   t\t|\ty\n");
    printf("-------------------------\n");
    for (int i = 0; i <= n; i++) {
        printf(" %.4f\t|\t%.4f\n", t[i], y[i]);
    }

    return 0;
}
