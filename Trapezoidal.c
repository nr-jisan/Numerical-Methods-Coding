#include<stdio.h>
#include <math.h>

float upperlimit = 2;
float lowerLimit = 0;

float f(float x){
    return (2*pow(x,2)-1);
}

int main(){
    float h, y[100],x[100],xn =lowerLimit,yn,tmp=0, A;
    int n;
    printf("Enter the number of intervals: ");
    scanf("%d",&n);

    h = (upperlimit - lowerLimit)/n;
   
    for(int i = 0; i<=n; i++){
        
        x[i]=xn;
        yn= f(xn);
        y[i]=yn;
        xn = xn+h;
    }
    printf("\n   x(n)  |   f(x(n))\n");
    printf("---------------------\n");
    for(int i=0;i<=n;i++){ 
        printf(" %.3f   |   %.3f\n", x[i],y[i]);
    }
    for(int i=1; i<n;i++){
            tmp = tmp + y[i];
    }

    A = 0.5*h*(y[0]+2*tmp+y[n]);
    printf("\nApproximate value of the definite integral using Trapezoidal Rule: %.3f\n\n",A);
    return 0;
}
