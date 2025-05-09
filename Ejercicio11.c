#include <stdio.h>

int main() 
    {
        int suma = 0;
        int num;
    
        for (num = 10; num <= 50; num++) 
            {
                if (num % 2 == 0) 
                    {
                        suma = suma + num;
                    }
            }
    
        printf("La suma de los números pares entre 10 y 50 es: %d\n", suma);
    
        return 0;
    }
