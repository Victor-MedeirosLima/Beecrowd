//Volta à Faculdade de Física
#include <stdio.h>

int main()
{
    int V,T,deslocamento;

        while(scanf("%d %d",&V,&T)!= EOF){
            
            deslocamento=V*(T*2);
            printf("%d\n",deslocamento);
        }
       

    return 0;
}
