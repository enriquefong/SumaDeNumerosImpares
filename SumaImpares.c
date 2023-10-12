#include <stdio.h>

int main() {
    // Declarativas de Variables
    int n, impar = 1, suma = 0;

    // Bloque de Instrucciones
    printf("¿Cuantos numeros impares desea sumar?: ");
    scanf("%d", &n);

    while (n > 0) {
        suma = suma + impar;
        impar = impar + 2;
        n = n - 1;
    }
    
    // Fin del bucle while
    printf("La suma de los primeros numeros impares capturados es: %d\n", suma);
    
    return 0;
}
