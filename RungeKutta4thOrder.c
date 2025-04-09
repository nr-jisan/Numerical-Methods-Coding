#include <stdio.h>
#include <math.h>  // For mathematical functions like pow()

// Define the differential equation function f(t, y) = y - t^2 + 1
float f(float t, float y) {
    return y - pow(t, 2) + 1;
}

int main() {
    float a, b, h;
    float t[100], y[100];  // Arrays to store t and y values

    // Ask the user for the range [a, b] for t
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

    // Calculate the number of steps (n) based on the range and interval size
    int n = round((b - a) / h);

    // Variables for Runge-Kutta method
    float k1, k2, k3, k4;

    // Apply the 4th-order Runge-Kutta method
    for (int i = 0; i < n; i++) {
        t[i + 1] = t[i] + h;  // Calculate the next t value

        // Calculate the four slopes for Runge-Kutta
        k1 = f(t[i], y[i]);  // First slope (k1)
        k2 = f(t[i] + 0.5 * h, y[i] + 0.5 * k1 * h);  // Second slope (k2)
        k3 = f(t[i] + 0.5 * h, y[i] + 0.5 * k2 * h);  // Third slope (k3)
        k4 = f(t[i] + h, y[i] + k3 * h);  // Fourth slope (k4)

        // Calculate the next y value using the weighted average of the slopes
        y[i + 1] = y[i] + ((1.0 / 6.0) * h * (k1 + 2 * k2 + 2 * k3 + k4));
    }

    // Output the results in a table format
    printf("\n   t\t|\ty\n");
    printf("----------------------\n");
    for (int i = 0; i <= n; i++) {
        printf(" %.4f\t|\t%.4f\n", t[i], y[i]);  // Print each value of t and the corresponding y
    }

    return 0;
}
