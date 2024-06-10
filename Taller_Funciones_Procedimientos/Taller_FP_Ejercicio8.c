// 8.Producto de una serie geométrica //
#include <stdio.h>

int Multiplicacion_N_Terminos(int numero)
{
    int resultado, contador, num;
    printf("Ingrese los números => ");
    contador = numero;
    resultado = 1;
    while (contador > 0)
    {
        scanf(" %d", &num);
        if (contador != 1)
        {
            printf("* ");
        }
        resultado = resultado * num;
        contador--;
    }

    return resultado;
}

int main()
{
    int numero, resultado;
    printf("Ingrese cuantos números desea ingresar => ");
    scanf("%d", &numero);
    resultado = Multiplicacion_N_Terminos(numero);
    printf("=> %d", resultado);
    return 0;
}
