//O Maior
#include <stdio.h>

int main()
{   
    int A,B,C,maior;

    

        scanf("%d %d %d",&A,&B,&C);
        
        maior=A;

        
        if(B>maior && B>C){
            maior=B;
        }
        if(C>maior && C>B){
            maior=C;
        }

        printf("%d eh o maior\n",maior);
        
        
            
        

        

    return 0;
}
