//Idade em Dias
#include <stdio.h>

int main()
{
    int dias,anos,meses;

        scanf("%d",&dias);

        int i=0;
        while((i*365)<dias){
            i++;
        }             
        anos=(i-1);

        dias-=(365*(i-1));

        int j=0;
        while((j*30)<=dias){
            j++;
        } 
        meses=(j-1);

        dias-=(30*(j-1));
        printf("%d ano(s)\n",anos);
        printf("%d mes(es)\n",meses);
        printf("%d dia(s)\n",dias);   
    
        

    return 0;
}
