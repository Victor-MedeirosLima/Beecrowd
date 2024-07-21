//Consumo
#include <stdio.h>



int main(int argc, char const *argv[])
{
    float Distancia, GastoCombustivel, Consumo; 

    scanf("%f", &Distancia);
    scanf("%f", &GastoCombustivel);

    Consumo = Distancia/GastoCombustivel;

    printf("%.3f km/l\n", Consumo);
    
    return 0;
}
