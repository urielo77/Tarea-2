#include <stdio.h>

int main() 
    {
        int A, B, suma, resta, multiplicacion;
    
        printf("Ingrese el primer número: ");
        scanf("%d", &A);
    
        printf("Ingrese el segundo número: ");
        scanf("%d", &B);
    
        suma = A + B;
        resta = A - B;
        multiplicacion = A * B;
    
        printf("La suma de %d y %d es: %d\n", A, B, suma);
        printf("La resta de %d y %d es: %d\n", A, B, resta);
        printf("La multiplicación de %d y %d es: %d\n", A, B, multiplicacion);
    
        return 0;
    }
