#include <stdio.h>

int main() {
    // Declarativas de Variables
    int n, num = 0, impar = 1, sumaImpar = 0;

    // Bloque de Instrucciones
    printf("¿Cuantos numeros impares desea sumar?: ");
    scanf("%d", &n);

    while (num < n) {
        printf("Numero impar: %d\n", impar);
        sumaImpar = sumaImpar + impar;
        impar = impar + 2;
        num = num + 1;
    }

    // Fin del bucle while
    printf("La suma de los %d primeros numeros impares es: %d\n", n, sumaImpar);

    return 0;
}
