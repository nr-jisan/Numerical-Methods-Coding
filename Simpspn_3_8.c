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
    float h, y[100], x[100], xn = lowerLimit, yn, term3 = 0, A, term2 = 0;
    int n;

    // Ask user for the number of intervals (n) for Simpson's 3/8 rule
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

    // Apply Simpson's 3/8 Rule: Separate the sums for the terms
    // term3 accumulates values for indexes not divisible by 3 (multiplied by 3)
    // term2 accumulates values for indexes divisible by 3 (multiplied by 2)
    for(int i = 1; i < n; i++){
        if(i % 3 != 0){  // If index is not divisible by 3, add to term3 (multiplied by 3)
            term3 = term3 + y[i];
        } else {  // If index is divisible by 3, add to term2 (multiplied by 2)
            term2 = term2 + y[i];
        }
    }

    // Calculate the final approximation using Simpson's 3/8 Rule
    A = ((h * 3) / 8) * (y[0] + 3 * term3 + 2 * term2 + y[n]);
    
    // Print the result of the integration
    printf("\nApproximate value of the definite integral using Simpson 3/8 Rule: %.3f\n\n", A);

    return 0;
}
