// 4.Radicación mediante restas sucesivas //

#include <stdio.h>

int radicacion(int base, int raiz, int resultado)
{
    resultado = base;
    printf("%d ^ (1/%d) = ", base, raiz);
    for (int i = raiz; i > 0; i--)
    {
        if (resultado < 1)
        {
            break;
        }

        printf(" %d/%d ", resultado, raiz);

        resultado /= raiz;
    }
    return resultado;
}

int main()
{
    int raiz, base;
    int resultado;
    printf("Ingrese la base y la raiz => \n");
    scanf("%d%d", &base, &raiz);
    resultado = radicacion(base, raiz, resultado);
    printf(" => %d", resultado);
    return 0;
}