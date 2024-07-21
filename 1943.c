//Top N

#include <stdio.h>

int main()
{
    int k;
    int top[] = {1,3,5,10,25,50,100}; 

    scanf("%d", &k);

    for(int i=0; i<7; i++){
        if(k<= top[i]){
            printf("Top %d\n", top[i]);
            break;
        }
    }
    

    return 0;
}
