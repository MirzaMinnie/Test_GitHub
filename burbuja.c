#include <stdio.h>
main ()
{    float L[1000], aux;
     int i,j,k,n;
     
     printf("Numero de datos: ");   scanf("%d",&n);
     for (i=0;i<n;i++)
     {   printf("dato[%d] ",i);    scanf("%f",&L[i]);   }
     j = n-1;
     while (j>0)
     {   k = 0;
         for (i=0;i<j;i++)
            if (L[i]>L[i+1])
            {   aux = L[i];
                L[i] = L[i+1];
                L[i+1] = aux;
                k = i;
            }
         j = k;
     }
     for (i=0;i<n;i++)
        printf("dato[%d] = %f\n",i,L[i]);
}
     
                
     
