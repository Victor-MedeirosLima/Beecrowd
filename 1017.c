// Gasto de Combustível
#include <stdio.h>
 
int main() {
 
    int horas, distancia;
    float VM,litros;

    scanf("%d", &horas);
    scanf("%f", &VM);

    distancia = VM * horas;

    litros = distancia / 12.0;

    printf("%.3f\n", litros);

 
    return 0;
}