#include <stdio.h>
#include <stdlib.h>

// "void" quando a aplicação não retorna nada.
void main()
{
    float area;
    float raio;
    // "const" usado quando queremos que o valor da variável não mude.
    const float pi = 3.14;

    printf("Digite o valor do raio de um circulo: ");
    scanf("%f", &raio);

    area = pi * (raio * raio);

    printf("\nO valor da area e: %f", area);
    return 0;
}
