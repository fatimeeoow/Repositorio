#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int num = get_int("Dame un número: ");
    printf("Tabla del número %i\n", num);

    for (int i = 0; i<10 ; i++)
    {
        printf("%i x %i = %i\n", num, i+1, num * (i+1));
    }
}
