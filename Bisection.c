#include <stdio.h>
#include<math.h>

// Function definition: This is the equation we're solving f(x) = x^3 - x - 2
float f(float x) {
    return pow(x,3) - x - 2;
}

int main() {
    float a, b, c, fa, fb, fc, error, epsilon;
    int choice, n;

    // Asking user to input the interval [a, b]
    printf("Enter the value of a (from): ");
    scanf("%f", &a);
    printf("Enter the value of b (to): ");
    scanf("%f", &b);

    // Calculating f(a) and f(b) to make sure they have opposite signs
    float x = f(a);
    float y = f(b);

    // If f(a) and f(b) have the same sign, the method won't work
    if(x*y>0){
        printf("\nInvalid input....!!! \nf(a)*f(b) must be less than or Equal Zero.\n");
        printf("f(a) = %.3f\n", x);  // Fixed: Previously printed wrong values
        printf("f(b) = %.3f\n", y);
        return 0;  // Exit the program
    }

    // Let user choose the method: number of iterations or error tolerance
    printf("\nChoose method:\n");
    printf("1. Use number of iterations\n");
    printf("2. Use error tolerance\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            // Iteration-based method
            printf("Enter the number of iterations: ");
            scanf("%d", &n);

            for (int i = 1; i <= n; i++) {
                fa = f(a);
                fb = f(b);
                c = (a + b) / 2; // Midpoint calculation
                fc = f(c);

                // Deciding whether the root lies in [a,c] or [c,b]
                if (fa * fc <= 0)
                    b = c;
                else
                    a = c;

                // Showing the progress of each iteration
                printf("%d. c = %f\n", i, c);
            }

            // Final answer after chosen number of iterations
            printf("\nApproximate root after %d iterations: %f\n", n, c);
            break;

        case 2:
            // Error-tolerance based method
            printf("Enter the error tolerance (epsilon): ");
            scanf("%f", &epsilon);

            for (int i = 1; ; i++) {
                fa = f(a);
                fb = f(b);
                c = (a + b) / 2;
                fc = f(c);

                if (fa * fc <= 0)
                    b = c;
                else
                    a = c;

                // Calculating the current error range
                if (b - a >= 0)
                    error = b - a;
                else
                    error = a - b;
                
                // Showing the current midpoint
                printf("%d. c = %f\n", i, c);

                // If we reached the desired accuracy, we stop
                if (error <= epsilon) {
                    printf("\nApproximate root within error %.6f: %f\n", epsilon, c);
                    break;
                }
            }
            break;

        default:
            // If the user gives an invalid input
            printf("Invalid choice! Please enter 1 or 2.\n");
    }

    return 0;
}
