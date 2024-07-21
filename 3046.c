//Dominó

#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int npecas;

    npecas= ((n+1)*(n+2))/2;

    printf("%d\n", npecas);
    return 0;
}
