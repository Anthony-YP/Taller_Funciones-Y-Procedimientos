// 3. Potencia mediante sumas sucesivas //
#include <stdio.h>

int potencias_sumas(int base, int exponente, int resultado)
{
    resultado = 1;
    printf("%d ^ %d = ", base, exponente);
    for (int i = exponente; i > 0; i--)
    {
        resultado *= base;

        printf("%d * ", base);
    }
    return resultado;
}

int main(int argc, char const *argv[])
{
    int base, exponente, resultado;
    printf("Ingrese la base y el exponente => \n");
    scanf("%d %d", &base, &exponente);
    resultado = potencias_sumas(base, exponente, resultado);
    printf(" => %d", resultado);
    return 0;
}
