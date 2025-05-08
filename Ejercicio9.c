#include <stdio.h>

int main() 
    {
        int N, i, resultado;
    
        printf("Ingrese el número para obtener su tabla de multiplicar: ");
        scanf("%d", &N);
    
        for (i = 1; i <= 50; i++) 
            {
                resultado = N * i;
                printf("%d x %d = %d\n", N, i, resultado);
            }
        return 0;
    }
