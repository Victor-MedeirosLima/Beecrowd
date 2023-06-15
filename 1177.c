//Preenchimento de Vetor II

#include <stdio.h>

int main()
{
      
    int T,vmaximo;
    int N[1000];

    scanf("%d",&T);

    vmaximo=T-1;
    int j=0;

    for(int i=0;i<1000;i++){
        N[i]=j;
        if(j==vmaximo){
            N[i]=j;
            j=0;
            
        }
        else{j++;}

        
        
    }


    
    for(int i=0;i<1000;i++){
        
        printf("N[%d] = %d\n",i,N[i]); 
 
    }

   

    return 0;
}
