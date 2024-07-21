//Tri-du

#include <stdio.h>

int main()
{
    int a,b,c;

    scanf("%d %d", &a, &b);

    if(a == b && a>b){
        c=a;
        printf("%d\n", c);
    }
    else if (a == b && b>a)
    {
        c=b;
        printf("%d\n", c);
    }   
    else if (a>b)
    {   
        c = a;
        printf("%d\n", c);
    }
    else
    {
        c = b;
        printf("%d\n", c);
    }

    return 0;
}
