#include <stdio.h>

int main() 
    {
        float radio, area, circunferencia;
        float Pi=3.1416;
    
        // Entrada de datos
        printf("Ingrese el radio del círculo (entero): ");
        scanf("%f", &radio);
    
        // Procesos
        area = Pi * radio * radio;
        circunferencia = 2 * Pi * radio;
    
        // Salida de resultados
        printf("El área aproximada del círculo es: %f\n", area);
        printf("La circunferencia aproximada del círculo es: %f\n", circunferencia);

        return 0;
    }
