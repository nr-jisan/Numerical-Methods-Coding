#include<stdio.h>
#include <math.h>

float upperlimit = 2;
float lowerLimit = 0;

float f(float x){
    return (2*pow(x,2)-1);
}

int main(){
    float h, y[100],x[100],xn =lowerLimit,yn,term3=0, A, term2 =0;
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
            if(i%3 !=0){
                term3 = term3 + y[i];
            }
            else{
                term2 = term2 + y[i];
            }
    }
    A = ((h*3)/8)*(y[0] + 3*term3+ 2*term2 + y[n]);
    printf("\nApproximate value of the definite integral using Simpson 3/8 Rule: %.3f\n\n",A);
    return 0;
}
