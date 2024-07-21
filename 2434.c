//Saldo do Vovô

#include <stdio.h>
#include <limits.h>

int main()
{
    int n,s;

    scanf("%d %d", &n, &s);
    int entrada = 0;
    int menor = INT_MAX;
    for (int i = 0; i < n; i++)
    {   
        scanf("%d", &entrada);
        
        

        s += entrada;
        
        if(s<menor){
            menor = s;
        }
        
    }
   
    printf("%d\n", menor);

    return 0;
}
