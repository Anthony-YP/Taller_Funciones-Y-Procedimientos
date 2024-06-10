#include <stdio.h>
#include <string.h>
// 2. Inverso de un número //

void sacarnumero()
{
    int longitud;
    char listnumero[100];
    printf("- Ingrese un número = > ");
    scanf("%s", &listnumero);
    longitud = strlen(listnumero);
    printf("El numero al reves es => ");
    for (int i = longitud; i >= 0; i--)
    {

        printf("%c", listnumero[i]);
    }
}

int main()
{
    sacarnumero();
}
