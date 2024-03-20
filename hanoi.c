#include <stdio.h>

void mueve (char ori, char dest)
{
    printf("%c --> %c\n",ori,dest);
}

void hanoi(int n, char origen, char aux, char destino)
{
    if (n == 1) mueve(origen,destino);
    else
    {   
        hanoi(n-1,origen, destino, aux);
        mueve(origen,destino);
        hanoi(n-1,aux,origen,destino);
    }
}

void main()
{
     int n;
     
     scanf("%d",&n);
     hanoi(n,'A','B','C');
}

     
