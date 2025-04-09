#include <stdio.h>
#include<stdio.h>

// Function definition: This is the function f(x) = x^3 - x - 2
float f(float x) {
    return pow(x,3) - x - 2;
}

int main() {
    float a, b, c, fa, fb, fc, error, epsilon;
    int choice, n;

    // Asking the user for initial guesses a and b
    printf("Enter the value of a (from): ");
    scanf("%f", &a);
    printf("Enter the value of b (to): ");
    scanf("%f", &b);

    // Evaluating the function at the endpoints
    float x = f(a);
    float y = f(b);

    // The False Position method only works if f(a) and f(b) have opposite signs
    if(x*y > 0){
        printf("\nInvalid input....!!! \nf(a)*f(b) must be less than or equal to zero.\n");
        printf("f(a) = %.3f\n", x);  // Fixed wrong print statement
        printf("f(b) = %.3f\n", y);
        return 0;  // Exit the program
    }

    // Ask user whether to use a fixed number of iterations or error tolerance
    printf("\nChoose method:\n");
    printf("1. Use number of iterations\n");
    printf("2. Use error tolerance\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            // If the user chooses fixed number of iterations
            printf("Enter the number of iterations: ");
            scanf("%d", &n);

            // Start the loop for 'n' iterations
            for (int i = 1; i <= n; i++) {
                fa = f(a);
                fb = f(b);

                // False Position formula
                c = (a * fb - b * fa) / (fb - fa);
                fc = f(c);

                // Deciding the new interval based on sign of f(c)
                if (fa * fc <= 0)
                    b = c;
                else
                    a = c;

                // Print current estimate of root
                printf("%d. c = %f\n", i, c);
            }

            // Display the final result after all iterations
            printf("\nApproximate root after %d iterations: %f\n", n, c);
            break;

        case 2:
            // If the user chooses error tolerance method
            printf("Enter the error tolerance (epsilon): ");
            scanf("%f", &epsilon);  // Example: 0.001

            // Run the loop until desired accuracy is achieved
            for (int i = 1; ; i++) {
                fa = f(a);
                fb = f(b);

                // Apply the False Position formula
                c = (a * fb - b * fa) / (fb - fa);
                fc = f(c);

                // Decide whether to replace a or b based on the sign of f(c)
                if (fa * fc <= 0)
                    b = c;
                else
                    a = c;

                // Calculate the absolute value of f(c) as error
                error = (fc >= 0) ? fc : -fc;

                // Show the current step result
                printf("%d. c = %f\n", i, c);

                // Stop if error is within the given tolerance
                if (error <= epsilon) {
                    printf("\nApproximate root within error %.6f: %f\n", epsilon, c);
                    break;
                }
            }
            break;

        default:
            // If user types something else other than 1 or 2
            printf("Invalid choice! Please enter 1 or 2.\n");
    }

    return 0;
}
