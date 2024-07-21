//Sequência Secreta
#include <stdio.h>


int main()
{   
    int n;
    int v,aux;
    int contador = 0;
    aux = 0;
    scanf("%d", &n);
    for(int i = 0; i<n; i++){

        scanf("%d",&v);
        

        if(v != aux){
            contador++;
            aux = v;
        }
        
        
    }

    printf("%d\n",contador);
    
    return 0;
}
