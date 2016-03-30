#include <iostream
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
/*
1. Elaborar una funcion que genere un numero par entre 50-150.
2.Elaborar un procedimiento donde se rellene el arreglo usando la funcion que genera los numeros.
3. Elaborar un procedimiento que me devuelva el numero mayor y menor.
4.Procedimiento para presentar los numeros:
En el programa principal llamar el ingreso, mayor, menor y presentar.
Presentar las variables de mayor y menor. */

char numero[5];

 int arreglo (int numero[])
{
    int numero=0
    do
    {
      numero= 1 + rand() % (150-50);
    }
    while (!(((numero[]>=50) and (numero[])<=150) and (numero[]==0));

    return numero;

}

void Ingreso(int numero[])
{
    for(i=0;i<5;i++)
    {
        numero[i]= arreglo;
    }

}

 void MaxiMini (int mayor, int menor, int numero)
 {
     int i;
     if (numero[i]>mayor)
     {
         mayor= numero[i];
     }
     if (numero[i]<menor)
     {
         menor = numero[i];
     }

 }



int main()
{   srand(time(0));


    return 0;
}
