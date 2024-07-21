//Gangorra
#include <stdio.h>
 
int main() {
    
    int P1,C1,P2,C2;

    scanf("%d %d %d %d", &P1, &C1, &P2 , &C2);

    int esquedo,direito;
    esquedo = P1 * C1;
    direito = P2 * C2;

    if(esquedo - direito == 0){
        printf("0\n");
    }
    else if(esquedo > direito ){
        printf("-1\n");
    } 
    else{
        printf("1\n");
    }
 
    return 0;
}