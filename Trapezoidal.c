#include<stdio.h>
#include <math.h>

// Define the upper and lower limits for integration
float upperlimit = 2;
float lowerLimit = 0;

// Define the function to be integrated: f(x) = 2x^2 - 1
float f(float x){
    return (2*pow(x,2)-1);
}

int main(){
    float h, y[100], x[100], xn = lowerLimit, yn, tmp = 0, A;
    int n;

    // Ask user for the number of intervals (n) for the Trapezoidal Rule
    printf("Enter the number of intervals: ");
    scanf("%d",&n);

    // Calculate the width of each interval (h)
    h = (upperlimit - lowerLimit) / n;
   
    // Loop to calculate the x values and corresponding f(x) values
    for(int i = 0; i <= n; i++){
        x[i] = xn;  // Store the current x value
        yn = f(xn); // Compute f(xn)
        y[i] = yn;  // Store the function value at x[i]
        xn = xn + h; // Increment xn by step size h for the next x value
    }

    // Print the x values and their corresponding f(x) values
    printf("\n   x(n)  |   f(x(n))\n");
    printf("---------------------\n");
    for(int i = 0; i <= n; i++){
        printf(" %.3f   |   %.3f\n", x[i], y[i]); // Output the x and f(x) values
    }

    // Apply the Trapezoidal Rule: Sum the intermediate values
    // 'tmp' accumulates the function values at the intermediate x values
    for(int i = 1; i < n; i++){
        tmp = tmp + y[i];
    }

    // The Trapezoidal Rule formula: A = (h/2) * [f(x0) + 2 * sum(f(xi)) + f(xn)]
    A = 0.5 * h * (y[0] + 2 * tmp + y[n]);

    // Print the result of the integration
    printf("\nApproximate value of the definite integral using Trapezoidal Rule: %.3f\n\n", A);

    return 0;
}
