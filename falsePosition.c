#include <stdio.h>

// Function definition
float f(float x) {
    return (x * x * x) - x - 2;
}

int main() {
    float a, b, c, fa, fb, fc, error, epsilon;
    int choice, n;

    printf("Enter the value of a (from): ");
    scanf("%f", &a);
    printf("Enter the value of b (to): ");
    scanf("%f", &b);

    float x = f(a);
    float y = f(b);

    if(x*y>0){
        printf("\nInvalid input....!!! \nf(a)*f(b) must be less than or Equal Zero.\n");
        printf("f(a) = %.3f\n", a, x);
        printf("f(b) = %.3f\n", b, y);
        return 0;
    }

    printf("\nChoose method:\n");
    printf("1. Use number of iterations\n");
    printf("2. Use error tolerance\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter the number of iterations: ");
            scanf("%d", &n);

            for (int i = 1; i <= n; i++) {
                fa = f(a);
                fb = f(b);
                c = (a * fb - b * fa) / (fb - fa); // False Position formula
                fc = f(c);

                if (fa * fc <= 0)
                    b = c;
                else
                    a = c;

                printf("%d. c = %f\n", i, c);
            }

            printf("\nApproximate root after %d iterations: %f\n", n, c);
            break;

        case 2:
            printf("Enter the error tolerance (epsilon): ");
            scanf("%f", &epsilon);//0.001

            for (int i = 1; ; i++) {
                fa = f(a);
                fb = f(b);
                c = (a * fb - b * fa) / (fb - fa); // False Position formula
                fc = f(c);

                if (fa * fc <= 0)
                    b = c;
                else
                    a = c;

                if (fc >= 0)
                    error = fc;
                else
                    error = -fc;
                
                

                printf("%d. c = %f\n", i, c);

                if (error <= epsilon) {
                    printf("\nApproximate root within error %.6f: %f\n", epsilon, c);
                    break;
                }
            }
            break;

        default:
            printf("Invalid choice! Please enter 1 or 2.\n");
    }

    return 0;
}
