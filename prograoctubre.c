#include <stdio.h>

int main() {
    int suma = 0;

    // Bucle para sumar los números del 1 al 1000
    for (int i = 1; i <= 1000; i++) {
        suma += i;
    }

    // Imprimir el resultado
    printf("La sumatoria de los números del 1 al 1000 es: %d\n", suma);

    return 0;
}
