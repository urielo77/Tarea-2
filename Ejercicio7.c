#include <stdio.h>

int main() 
    {
        float Ida, Total, precio;
        int Estancia;

        printf("Ingrese la distancia de ida en kilómetros: ");
        scanf("%f", &Ida);
    
        printf("Ingrese el número de días de estancia: ");
        scanf("%d", &Estancia);
    
        Total = 2 * Ida;
        precio = Total * 0.23;
    
        if (Estancia > 7 && Total > 800) 
            {
                precio = precio * 0.7;
            }
    
        printf("El precio del ticket es: %f\n", precio);
    
        return 0;
    }
