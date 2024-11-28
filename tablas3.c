#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int num = get_int("Dame un número: ");
    int start = get_int("Dame el número para iniciar a multiplicar: ");
    printf("Tabla del número %i comenzando desde %i\n", num, start);

    for (int i = 0; i < 10; i++)
    {
        printf("%i x %i = %i\n", num, start + i, num * (start + i));
    }
}
//pide al usuario el numero inicial para multiplicar y usa for
