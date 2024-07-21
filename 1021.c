//Notas e Moedas
#include <stdio.h>
 
int main() {
    
    double valor;
    scanf("%lf", &valor);

    int notas[6]  = {100.00, 50.00, 20.00, 10.00, 5.00, 2.00 }; 
    double Moedas[6] = {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};

    printf("NOTAS:\n");
    for(int i = 0; i<6; i++)
    {   
        int NumeroNotas = 0;

        while(NumeroNotas * notas[i] <= valor)
        {
            NumeroNotas++;
        }

        NumeroNotas--;
        valor -= NumeroNotas * notas[i];

        
    
        printf("%d nota(s) de R$ %d.00\n", NumeroNotas, notas[i]);      

        
    }
    
    printf("MOEDAS:\n");

    for (int  i = 0; i <= 6; i++)
    {
        int NumeroNotas = 0;

        while(NumeroNotas * Moedas[i] <= valor)
        {
            NumeroNotas++;
        }

        NumeroNotas--;
        valor -= NumeroNotas * Moedas[i];

        printf("%d moeda(s) de R$ %.2lf\n", NumeroNotas, Moedas[i]);
    }
    

    return 0;
}