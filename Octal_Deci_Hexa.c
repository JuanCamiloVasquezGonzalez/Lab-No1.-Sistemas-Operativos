#include <stdio.h>

int main() {
    printf("Decimal\tOctal\tHexadecimal\n");
    for (int i = 1; i <= 10; ++i) {
        printf("%d\t%o\t%x\n", i, i, i);
    }
    return 0;
}
