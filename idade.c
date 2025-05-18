#include <stdio.h>

int main()
{
    int born;
    char name[200];
    printf("Digite o seu nome, seu ano de nascimento e: ");
    scanf("%200[^\n]%d", name, &born);
    int age = 2025 - born;
    
    if ((age >= 1) && (age <= 12)) {
        printf("Seu nome e %s, voce nasceu no ano de %d, voce tem %d anos e voce e uma crianca, vai estudar", name, born, age);
    } 
    else if ((age >= 13) && (age <= 17)) {
        printf("Seu nome e %s, voce nasceu no ano de %d, voce tem %d anos e voce e um adolescente. Terceira do dia ja?", name, born, age);
    } 
    else if ((age >= 18) && (age <= 40)) {
        printf("Seu nome e %s, voce nasceu no ano de %d, voce tem %d anos e voce e um adulto. Ja pagou a conta hoje?", name, born, age);
    } 
    else {
        printf("Seu nome e %s, voce nasceu no ano de %d, voce tem %d anos e voce e um velho. jaja ta a 7 palmos.", name, born, age);
    }

    return 0;
}