#include <stdio.h>

int main() 
{
    int num1, num2, umaquatro;
    float umaquatro2;
    printf("Escolha um numero: ");
    scanf("%d", &num1);
    printf("EScolha outro numero: ");
    scanf("%d", &num2);
    printf("Qual operacao voce quer fazer?\n1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n");
    scanf("%d", &umaquatro);
    switch (umaquatro){
        case 1:{
            printf("A soma de %d e %d e igual a: %d", num1, num2, num1 + num2);
            break;
        }
        case 2:{
            printf("A subtracao de %d e %d e igual a: %d", num1, num2, num1 - num2);
            break;
        }
        case 3:{
            printf("A Multiplicacao de %d e %d e igual a: %d", num1, num2, num1 * num2);
            break;
        }
        case 4:{
            umaquatro2 = (double)num1 / num2;
            printf("A Divisao de %d e %d e igual a: %0.2f", num1, num2, umaquatro2);
            break;
        }
    }
    return 0;
}