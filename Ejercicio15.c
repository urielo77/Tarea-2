#include <stdio.h>

int main() 
    {
        int n, i;
        int positivos = 0, negativos = 0, nulos = 0;
    
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
                if (arreglo[i] > 0) 
                {
                    positivos++;
                } else 
                      if (arreglo[i] < 0) 
                          {
                            negativos++;
                          } 
                      else 
                          {
                              nulos++;
                          }
            }
    
        printf("Cantidad de positivos: %d\n", positivos);
        printf("Cantidad de negativos: %d\n", negativos);
        printf("Cantidad de nulos: %d\n", nulos);
    
        return 0;
    }
