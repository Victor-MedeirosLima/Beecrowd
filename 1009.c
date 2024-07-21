//Salário com Bônus
#include <stdio.h>

int main()
{   
    double salario_fixo,total_vendas,salario_total;
        char nome[]="%s";
        scanf("%s",&nome);        
        scanf("%lf",&salario_fixo);
        scanf("%lf",&total_vendas);
        
        salario_total=salario_fixo+(total_vendas*.15);
    
        printf("TOTAL = R$ %.2lf\n",salario_total);
    
    
        

    return 0;
}
