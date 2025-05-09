#include <stdio.h>

int main()
    {
      int num, i;
      int pos = 0, neg = 0, nul = 0;
    
        for (i = 1; i <= 100; i++) 
        {
            printf("Ingrese el número %d: ", i);
            scanf("%d", &num);
    
            if (num > 0) 
                {
                    pos = pos + 1;
                } 
            else 
                {
                    if (num < 0) 
                        {
                            neg = neg + 1;
                        } 
                    else 
                        {
                            nul++;
                        }
                }
        }        
    
        printf("Cantidad de positivos: %d\n", pos);
        printf("Cantidad de negativos: %d\n", neg);
        printf("Cantidad de nulos: %d\n", nul);
    
        return 0;
    }
