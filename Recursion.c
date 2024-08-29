#include <stdio.h>


float potencia(float base, int exp) {
    float res;
    if (exp == 0)
        res = 1.0;
    else if (exp > 0)
        res = base * potencia(base, exp - 1);
    else if (exp < 0)
        res = 1.0 / base * potencia(base, exp + 1);
    return res;
}

int main() {
    float base;
    int exponente;

    printf("Ingresa la base: ");
    scanf("%f", &base);
    printf("Ingresa el exponente (entero): ");
    scanf("%d", &exponente);

    float resultado = potencia(base, exponente);
    printf("%.2f ^ %d = %.2f\n", base, exponente, resultado);

    return 0;
}
