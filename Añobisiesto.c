#include <stdio.h>

int esBisiesto(long anio) {
    
    return anio % 4 == 0 && (anio % 100 != 0 || anio % 400 == 0);
}

int main() {
    long anio;
    printf("Ingresa un año: ");
    scanf("%ld", &anio);

    int resultado = esBisiesto(anio);
    if (resultado) {
        printf("Es bisiesto\n");
    } else {
        printf("NO es bisiesto\n");
    }

    printf("Años bisiestos de 1900 a 2200:\n");
    for (anio = 1900; anio <= 2200; anio++) {
        if (esBisiesto(anio)) {
            printf("%ld, ", anio);
        }
    }

    return 0;
}
