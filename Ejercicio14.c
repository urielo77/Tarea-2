#include <stdio.h>

int main() 
    {
        int n, i, suma = 0;
    
        printf("Ingrese el tamaño del arreglo: ");
        scanf("%d", &n);
    
        int arreglo[n];

        printf("Ingrese los elementos del arreglo:\n");
        for (i = 0; i < n; i++) 
            {
                scanf("%d", &arreglo[i]);
            }
    
        for (i = 0; i < n; i++) 
            {
                suma = suma + arreglo[i];
            }
    
        printf("La suma de los elementos del arreglo es: %d\n", suma);
    
        return 0;
    }
