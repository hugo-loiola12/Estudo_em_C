#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Inteiro1, Inteiro2, Expressao;
    char Operador;

    printf("Coloque a expressão: \n");
    scanf("%d %c %d", &Inteiro1, &Operador, &Inteiro2);

    switch (Operador)
    {
    case '+':
        Expressao = Inteiro1 + Inteiro2;
        break;
    case '-':
        Expressao = Inteiro1 - Inteiro2;
        break;
    case '*':
        Expressao = Inteiro1 * Inteiro2;
        break;
    case '/':
        Expressao = Inteiro1 / Inteiro2;
        break;
    case '%':
        Expressao = Inteiro1 % Inteiro2;
        break;
    default:
        break;
    }

    printf("%d", Expressao);

    return 0;
}