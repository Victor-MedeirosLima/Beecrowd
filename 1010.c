//Cálculo Simples
#include <stdio.h>

int main()
{   
    float preco1,preco2,total;
    int q1,q2,codigo1,codigo2;
    

        scanf("%d %d %f",&codigo1,&q1,&preco1);
        scanf("%d %d %f",&codigo2,&q2,&preco2);
        
        total=(q1*preco1)+(q2*preco2);
        
        
    
        printf("VALOR A PAGAR: R$ %.2f\n",total);
    
    
        

    return 0;
}
