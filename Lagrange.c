#include <stdio.h>

int main() {
    float x[100], y[100], point, l, fx = 0;
    int i, j, n;

    printf("Enter the number of data points: ");
    scanf("%d", &n);

    printf("\nEnter the data points:\n");
    for(i = 0; i < n; i++) {
        printf("X[%d] = ", i);
        scanf("%f", &x[i]);
        printf("Y[%d] = ", i);
        scanf("%f", &y[i]);
    }

    printf("\nEnter the interpolation point: ");
    scanf("%f", &point);

    // Lagrange interpolation formula
    for(i = 0; i < n; i++) {
        l = 1;
        for(j = 0; j < n; j++) {
            if(i != j) {
                l = l * (point - x[j]) / (x[i] - x[j]);
            }
        }
        fx = fx + l * y[i];
    }

    printf("\nInterpolated value at %.3f is %.3f\n", point, fx);

    return 0;
}
