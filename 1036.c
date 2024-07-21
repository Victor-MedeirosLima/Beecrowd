// Fórmula de Bhaskara
#include <stdio.h>
#include <math.h>
 
int main() {
 
    float A, B, C;

    scanf("%f %f %f", &A, &B, &C);

    float delta = (pow(B,2) - (4*A*C));
    float  R1, R2;
    
    if(delta < 0 || A == 0){
        
        printf("Impossivel calcular\n");
    }
    else{
        
        R1 = (-B + sqrt(delta))/(2*A);
        R2 = (-B - sqrt(delta))/(2*A);

        printf("R1 = %.5f\n", R1);
        printf("R2 = %.5f\n", R2);
    }


 
    return 0;
}