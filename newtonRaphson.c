#include<stdio.h>
#include<math.h>

float f(float x){
    return (x * x * x) - x - 2;
}

float fp(float x){
    return 3*(x * x) - 1;
}

int main(){
    float x0,c,fc,error, epsilon;
    int choice,n;
    printf("Enter the initial guess for X0: ");
    scanf("%f", &x0);

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
                x0 = x0 - (f(x0)/fp(x0));
                printf("%d. X%d = %f\n", i,i,x0);
            }

            printf("\nApproximate root after %d iterations: %f\n", n, x0);
            break;

        case 2:
            printf("Enter the error tolerance (epsilon): ");
            scanf("%f", &epsilon);

            for (int i = 1; ; i++) {
                x0 = x0 - (f(x0)/fp(x0));
                printf("%d. X%d = %f\n", i,i,x0);

                fc=f(x0);

                if (fc >= 0)
                    error = fc;
                else
                    error = -fc;

                if (error <= epsilon) {
                    printf("\nApproximate root within error %.6f: %f\n", epsilon, c);
                    break;
                }
            }
            break;

        default:
            printf("Invalid choice! Please enter 1 or 2.\n");
    }
}