#include <stdio.h>

int main() 
    {
        float dolares, pesos;
    
        printf("Ingrese la cantidad en dólares: ");
        scanf("%f", &dolares);
    
        pesos = dolares * 11.96 ;
    
        printf("La cantidad en pesos es: %f\n", pesos);
    
        return 0;
    }
