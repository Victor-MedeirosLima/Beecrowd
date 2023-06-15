//Menor e Posição

#include <stdio.h>

int main()
{
    int n,menor_valor,posicao;
    scanf("%d",&n);
    
    int x[n];
    
    for(int i=0;i<n;i++){
        scanf("%d",&x[i]);
        
        
    }


    menor_valor=x[0];
    for(int i=0;i<n;i++){
        if(x[i]<menor_valor){
            menor_valor=x[i];
            posicao=i;
        }


    }

    
    printf("Menor valor: %d\n",menor_valor);
    printf("Posicao: %d\n",posicao);
    
    
        

    return 0;
}
