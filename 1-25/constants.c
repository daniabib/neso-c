// Preprocessor (not compilie) subtitute NAME with value
// uma constante (#define NAME) também é chamado MACRO

#include <stdio.h>
#define PI 3.14159
#define add(x,y) x+y
#define greater(x,y) if (x > y) \
                        printf("%d is greater than %d\n", x, y); \
                     else \
                        printf("%d is lesser than %d\n", x, y);

int main() {
    printf("Pi ~= %.5f\n", PI);
    printf("%d + %d = %d\n", 3, 4, add(3,4));

    greater(5,7);
    greater(21,10);

    printf("Atenção! Macros são expandidos antes de serem avaliados:\n");
    printf("%d * add(%d + %d) = %d\n", 5, 3, 4, 5 * add(3,4));

    // Outra maneira de definir constantes é com a keyword const.
    // A variável se torna read-only.
    // Atenção! Quando colocamos 0 na frente de um número ele é tratado como base 8.
    const int var = 067;
    printf("Constante em rep. decimal: %d\n", var);
    printf("Constante em rep. octal: %o\n", var);

    return 0;
}

