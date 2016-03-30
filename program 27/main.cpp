#include <iostream>

using namespace std;
/*Ingresar 5 numeros a un arreglo usando un procedimiento
luego obtener su promedio usando una funcion.
cuantos pares tiene el arreglo usando otra funcion.
Presentar los resultados en el main
si el residuo de la div. entre dos es cero
el numero es par 5 % 2 el resultado es 1.*/

int numero [5];
double promedio;
int par;

void Dato (int numero[])
{
    int i;
    for (i=0; i<=5; i++)
    {
        cout<<"Ingresar numero"<<"\n";
        cin>> numero [i];
    }
}

double Prom (int numero[])
{
    int i=0; double suma=0;
    for(i=0;i<=5;i++)
    {
        suma=suma + numero[i];
    }

    return suma/5;
}

int ContarPar (int numero[])
{
    int i=0; double suma=0;
    for(i=0;i<=5;i++)
    {
        if (numero[i]%2==0)
        {
            par++;
        }
    }
    return par;
}


int main()
{
    Dato(numero);
    par=ContarPar(numero);
    promedio=Prom(numero);

    cout<<"El promedio total es..."<<promedio<<"\n";
    cout<<"Numeros pares son..."<<par<<"\n";

    return 0;
}
