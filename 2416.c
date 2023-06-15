//Corrida

#include <stdio.h>

int main()
{
    int c,n,div,t,dif;
    
    scanf("%d %d",&c,&n);

    //numero de voltas inteiras
    div=c/n;

    //total de metros nas voltas inteiras

    t=n*div;

    //ponto de término

    dif=c-t;

    printf("%d\n",dif);

    return 0;
}
