//Tacógrafo
#include <stdio.h>

int main()
{   
    int n,t,v;
    int distanciaTotal= 0;
    scanf("%d",&n);
    for(int i=0; i<n; i++){

        scanf("%d %d", &t, &v);
        distanciaTotal+= t*v;

    }
    
    printf("%d\n", distanciaTotal);

    return 0;
}
