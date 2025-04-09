#include <stdio.h>
#include <math.h> 

// Define the function f(x) = x^3 - x - 2
float f(float x){
    return pow(x,3) - x - 2;
}

// Define the derivative of the function f'(x) = 3x^2 - 1
float fp(float x){
    return 3*(x * x) - 1;
}

int main(){
    float x0, c, fc, error, epsilon;
    int choice, n;

    // Ask user for an initial guess
    printf("Enter the initial guess for X0: ");
    scanf("%f", &x0);

    // Let the user choose the stopping condition
    printf("\nChoose method:\n");
    printf("1. Use number of iterations\n");
    printf("2. Use error tolerance\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            // If the user wants to stop after a fixed number of steps
            printf("Enter the number of iterations: ");
            scanf("%d", &n);

            for (int i = 1; i <= n; i++) {
                // Apply the Newton-Raphson formula: x = x - f(x)/f'(x)
                x0 = x0 - (f(x0)/fp(x0));

                // Show current value of root approximation
                printf("%d. X%d = %f\n", i, i, x0);
            }

            // Show final result
            printf("\nApproximate root after %d iterations: %f\n", n, x0);
            break;

        case 2:
            // If the user wants to stop based on a desired accuracy
            printf("Enter the error tolerance (epsilon): ");
            scanf("%f", &epsilon);

            for (int i = 1; ; i++) {
                // Apply Newton-Raphson update
                x0 = x0 - (f(x0)/fp(x0));

                // Print the current step's estimate
                printf("%d. X%d = %f\n", i, i, x0);

                // Check the absolute value of f(x0) to measure error
                fc = f(x0);
                error = (fc >= 0) ? fc : -fc;

                // If error is within the tolerance, we're done!
                if (error <= epsilon) {
                    printf("\nApproximate root within error %.6f: %f\n", epsilon, x0);
                    break;
                }
            }
            break;

        default:
            // Handle wrong input for choice
            printf("Invalid choice! Please enter 1 or 2.\n");
    }

    return 0;
}
