// 5. Serie de Fibonacci //
#include <stdio.h>

int Fibo(int limite)
{
    int resultado, auxiliar, auxiliar2;
    auxiliar = 0;
    resultado = 1;
    for (int i = 0; i < limite; i++)
    {
        printf("%d, ", auxiliar);
        auxiliar2 = resultado + auxiliar;
        resultado = auxiliar;
        auxiliar = auxiliar2;
    }

    return resultado;
}

int main()
{
    int limite, resultado;
    printf("Ingrese el limite de la serie => \n");
    scanf("%d", &limite);
    resultado = Fibo(limite);
    return 0;
}