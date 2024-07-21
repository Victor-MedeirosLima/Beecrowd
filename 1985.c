//MacPRONALTS

#include <stdio.h>

int main()
{
    int p;

    scanf("%d", &p);

    
    char codigo[5];
    float soma = 0;
    int quantidade;

    for(int i = 0; i<p; i++){

        scanf("%s %d", &codigo, &quantidade);

        if(codigo[3] == '1'){
            soma +=(1.50*quantidade);
        }
        else if (codigo[3] == '2')
        {
            soma +=(2.50*quantidade);
        }
        else if (codigo[3] == '3')
        {
            soma +=(3.50*quantidade);
        }
        else if (codigo[3] == '4')
        {
            soma +=(4.50*quantidade);
        }
        else if (codigo[3] == '5')
        {
            soma +=(5.50*quantidade);
        }
        
        
        
    }

    printf("%.2f\n", soma);

    return 0;
}
