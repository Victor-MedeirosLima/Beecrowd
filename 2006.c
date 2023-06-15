//Identificando o Chá

#include <stdio.h>

int main()
{
    int T;
    
    scanf("%d",&T);

    int v[5];

        for(int i=0;i<5;i++){
            scanf("%d",&v[i]);
        }
    

    int cont=0;

    for(int i=0;i<5;i++){
        if(v[i]==T){
            cont++;
        }
    }

    printf("%d\n",cont);

    return 0;
}
