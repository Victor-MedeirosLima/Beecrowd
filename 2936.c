//Quanta Mandioca?
#include <stdio.h>

int main()
{
    int quantMandioca = 225;

    int nCurupira;
    int nboitata;
    int nBoto;
    int nMapinguari;
    int nIara;

    scanf("%d", &nCurupira);
    scanf("%d", &nboitata);
    scanf("%d", &nBoto);
    scanf("%d", &nMapinguari);
    scanf("%d", &nIara);


    quantMandioca += (nCurupira*300 + nboitata*1500 + nBoto*600 +  nMapinguari*1000 + nIara*150) ;

    printf("%d\n", quantMandioca);

    return 0;
}
