#include <stdio.h>

int main() {
    long int numero, factorial = 1;

    printf("Ingresa un número para calcular su factorial: ");
    scanf("%ld", &numero);

    for (long int i = 1; i <= numero; ++i) {
        factorial *= i;
    }

    printf("El factorial de %ld = %ld\n", numero, factorial);

    return 0;
}
