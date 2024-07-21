// Cédulas
#include <stdio.h>
 
int main() {
 
    int valor;
    scanf("%d", &valor);

    int notas[7]  = {100, 50, 20, 10, 5, 2, 1}; 

    printf("%d\n", valor);
    for(int i = 0; i<7; i++)
    {   
        int NumeroNotas = 0;

        while(NumeroNotas * notas[i] <= valor)
        {
            NumeroNotas++;
        }

        NumeroNotas--;
        valor -= NumeroNotas * notas[i];


        printf("%d nota(s) de R$ %d,00\n", NumeroNotas ,notas[i]);
    }
    


 
    return 0;
}