#include <stdio.h>

int main() 
    {
        float compra, descuento = 0, total;
    
        printf("Ingrese el monto de la compra: ");
        scanf("%f", &compra);
    
        if (compra > 2500) 
            {
                descuento = compra * 0.08;
            }
        total = compra - descuento;
      
        printf("El monto que el cliente debe pagar es: %f\n", total);
    
        return 0;
    }
