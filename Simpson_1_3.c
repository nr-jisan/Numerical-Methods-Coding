#include<stdio.h>
#include <math.h>

float upperlimit = 2;
float lowerLimit = 0;

float f(float x){
    return (2*pow(x,2)-1);
}

int main(){
    float h, y[100],x[100],xn =lowerLimit,yn,even=0, A, odd =0;
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
        if(i%2==0){
           even = even + y[i]; 
        }
        else{
            odd = odd + y[i];
        }
        
    }
    A = (h/3)*(y[0] + 2*even + 4*odd +y[n]);
    printf("\nApproximate value of the definite integral using Simpson 1/3 Rule: %.3f\n\n",A);
    return 0;
}
