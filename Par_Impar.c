#include <stdio.h>

int main() {
    int num;
    printf("Introduce un número entero: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d es par.\n", num);
    } else {
        printf("%d es impar.\n", num);
    }

    return 0;
}
