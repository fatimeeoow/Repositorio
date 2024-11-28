#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int num = get_int("Dame un número: ");
    printf("Tabla del número %i\n", num);

    int i = 0;
    while (i < 10)
    {
        printf("%i x %i = %i\n", num, i + 1, num * (i + 1));
        i++;
    }
}
//usa funcion while
