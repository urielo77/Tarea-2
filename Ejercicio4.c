#include <stdio.h>

int main() 
    {
        float inv, tasa, interes, Final;
    
        printf("Ingrese la cantidad invertida: ");
        scanf("%f", &inv);
    
        printf("Ingrese la tasa de interés mensual (en porcentaje): ");
        scanf("%f", &tasa);
    
        interes = inv * (tasa / 100);
        Final = inv + interes;
    
        printf("El monto final al finalizar el mes es: %f\n", Final);
    
        return 0;
    }
