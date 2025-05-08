#include <stdio.h>

int main() 
    {
        float sueldo, aumento, Final;
    
        printf("Ingrese el sueldo del trabajador: ");
        scanf("%f", &sueldo);
    
        if (sueldo < 1000) 
            {
               aumento = sueldo * 0.15;
            } 
       
        else 
            {
                aumento = sueldo * 0.12;
            }
        
        Final = sueldo + aumento;
    
        printf("El sueldo con el aumento es: %f\n", Final);
    
        return 0;
    }
