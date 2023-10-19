#include <stdio.h>
#include <conio.h>

int main() {
    // Declarativas de Variables
    int n, impar = 1, suma = 0;

    printf("\n Curso: Principios de programacion.");  
    printf("\n Grupo: 1SF-115");  
    printf("\n Integrantes: Jose Huertas(2-754-1176), Enrique Fong(4-829-300), William Rush(8-1017-1144)");  
    printf("\n Profesora: Anna Araba");  
    printf("\n Fecha de entrega: 19/10/2023");  
    printf("\n \n Problema#5: Calcule la suma de los N primeros numeros impares, leidos desde pantalla.");  
    printf("\n Programa: SumaImpares - Enrique Fong (4-829-300)");  
    printf("\n Desarrollado en Visual Studio Code v1.83.1 2\n");  
    
    // Bloque de Instrucciones
    printf("\n¿Cuantos numeros impares desea sumar?: ");
    scanf("%d", &n);
    
    if (n < 0) //verificación
    {
    printf("Esa cantidad no es valida."); 
    printf("\nPresione cualquier tecla para salir");  
    getch();  
    }
    else
    {
        while (n > 0) {
            suma += impar;
            impar += 2;
            n -= 1;
        }
        // Fin del bucle while
        printf("\nLa suma de los primeros numeros impares capturados es: %d\n", suma);
        printf("\nPresione cualquier tecla para salir");  
        getch();
    }
    return 0;
}
