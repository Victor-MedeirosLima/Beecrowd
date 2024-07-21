//Conversão de Tempo
#include <stdio.h>
 
int main() {
 
    int Segundos;
    
    scanf("%d", &Segundos);

    int Horas = 0,Minutos = 0;

    if(Segundos>=3600){
        Horas = Segundos/3600;
        Segundos -= Horas * 3600;
    }

    if(Segundos>=60){
        Minutos = Segundos/60;
        Segundos -= Minutos*60;
         
    }

    printf("%d:%d:%d\n", Horas, Minutos, Segundos);
    
    
    return 0;
}