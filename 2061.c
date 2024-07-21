//As Abas de Péricles

#include <stdio.h>

int main()
{   
    int n,m;
    char acao[6];
    

    scanf("%d %d", &n, &m);
    

    for (int  i = 0; i < m; i++)
    {
        scanf("%s", &acao);

        if(acao[0]== 'f'){
            n += 1;
        }
        else{
            n -= 1;
        }

    }
    
    printf("%d\n", n);
    return 0;
}
