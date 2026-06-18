#include <stdio.h>
void suma();
float resta(float,float);
void multiplicacion();
float division(float,float);

int main() {
    float n1, n2;
    suma();
    printf("\nDame un numero: ");
    scanf("%f", &n1);
    printf("Dame otro numero: ");
    scanf("%f", &n2);
    printf("La resta es: %.2f\n", resta(n1, n2));
    multiplicacion();
    printf("\nDame un numero para dividir: ");
    scanf("%f", &n1);
    printf("Dame otro numero: ");
    scanf("%f", &n2);
    printf("La division es: %.2f\n", division(n1, n2));
    return 0;
}

void suma() {
    int a, b;
    printf("Dame un numero: ");
    scanf("%d", &a);
    printf("Dame otro numero: ");
    scanf("%d", &b);
    printf("La suma es: %d\n", a + b);
}

float resta(float a, float b) {
    return a - b;
}

void multiplicacion() {
    float a, b;
    printf("\nDame un numero: ");
    scanf("%f", &a);
    printf("Dame otro numero: ");
    scanf("%f", &b);
    printf("La multiplicacion es: %.2f\n", a * b);
}

float division(float a, float b) {
    if (b == 0) {
        printf("Error: no se puede dividir entre cero.\n");
        return 0;
    }
    return a / b;
}
