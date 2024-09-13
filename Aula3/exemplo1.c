#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float Trabalho, Avaliacao, Exame, Media;
    char Conceito;

    printf("Coloque a nota do Trabalho: \n");
    scanf("%f", &Trabalho);

    printf("Coloque a nota da Avaliação: \n");
    scanf("%f", &Avaliacao);

    printf("Coloque a nota do Exame: \n");
    scanf("%f", &Exame);

    if (Trabalho < 0 || Avaliacao < 0 || Exame < 0)
    {
        printf("Encerrando o codigo!\n");
        return 1;
    }

    Media = (Trabalho * 2) + (Avaliacao * 3) + (Exame * 5);
    Media = Media / (2 + 3 + 5);

    if (Media >= 8 && Media <= 10)
    {
        Conceito = 'A';
    }
    else if (Media >= 7 && Media <= 7.99)
    {
        Conceito = 'B';
    }
    else if (Media >= 6 && Media <= 6.99)
    {
        Conceito = 'C';
    }
    else if (Media >= 5 && Media <= 5.99)
    {
        Conceito = 'D';
    }
    else if (Media >= 0 && Media <= 4.99)
    {
        Conceito = 'E';
    }

    printf("A nota foi %.2f e o conceito e %c", Media, Conceito);

    return 0;
}
