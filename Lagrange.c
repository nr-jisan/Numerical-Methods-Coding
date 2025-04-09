#include <stdio.h>

int main() {
    float x[100], y[100], point, l, fx = 0;
    int i, j, n;

    // Asking user how many known data points they'll provide
    printf("Enter the number of data points: ");
    scanf("%d", &n);

    // Taking input of x[i] and corresponding y[i]
    printf("\nEnter the data points:\n");
    for(i = 0; i < n; i++) {
        printf("X[%d] = ", i);
        scanf("%f", &x[i]);
        printf("Y[%d] = ", i);
        scanf("%f", &y[i]);
    }

    // Asking user where they want to find the interpolated value
    printf("\nEnter the interpolation point: ");
    scanf("%f", &point);

    // Now we apply the Lagrange formula
    for(i = 0; i < n; i++) {
        l = 1; // Starting with l = 1 for each term

        // Calculate the i-th Lagrange basis polynomial
        for(j = 0; j < n; j++) {
            if(i != j) {
                // Multiplying the product part: (x - xj) / (xi - xj)
                l = l * (point - x[j]) / (x[i] - x[j]);
            }
        }

        // Multiply basis polynomial l with corresponding y[i] and add to result
        fx = fx + l * y[i];
    }

    // Finally, print the interpolated value at given point
    printf("\nInterpolated value at %.3f is %.3f\n", point, fx);

    return 0;
}
