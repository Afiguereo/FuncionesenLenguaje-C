#include <stdio.h>

float FuncionSuma(float a, float b);
float FuncionResta(float a, float b);
float FuncionMultiplica(float a, float b);
float FuncionDivide(float a, float b);

int main() {
    float num1, num2;
    float resultadoSuma, resultadoResta, resultadoMultiplicacion, resultadoDivision;

    printf("Ingrese el primer número: ");
    scanf("%f", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%f", &num2);

    resultadoSuma = FuncionSuma(num1, num2);
    resultadoResta = FuncionResta(num1, num2);
    resultadoMultiplicacion = FuncionMultiplica(num1, num2);
    resultadoDivision = FuncionDivide(num1, num2);

    printf("Suma: %.2f\n", resultadoSuma);
    printf("Resta: %.2f\n", resultadoResta);
    printf("Multiplicación: %.2f\n", resultadoMultiplicacion);
    printf("División: %.2f\n", resultadoDivision);

    return 0;
}

float FuncionSuma(float a, float b) {
    return a + b;
}

float FuncionResta(float a, float b) {
    return a - b;
}

float FuncionMultiplica(float a, float b) {
    return a * b;
}

float FuncionDivide(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        return 0;
    }
}
