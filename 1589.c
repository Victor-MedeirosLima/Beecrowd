//Bob Conduite

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    int r1,r2;
    for(int i = 0; i<t; i++){

        scanf("%d %d", &r1, &r2);

        printf("%d\n", r1+r2);


    }

    return 0;
}
