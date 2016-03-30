#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int numero [5];
int mini, suma, m;
double promedio;

void ingreso (int numero[])
{
    int i;
    for (i=1; i<=5; i++)
    {
      do
        {
            cout<<"Ingresar un numero..."<<"\n";
            cin>>numero[i];
        }

      while (!((numero[i]>=50) and (numero[i]%2==0)));
    }
}

int maxi (int numero[])
{
    int i;
    int mayor;

    for (i=1;i<=5;i++)
    {
        if (mayor >=numero[i])
        {
            mayor = numero[i];
        }
    }
    return mayor;
}


double prom (int numero[])
{
    int i=0;
    int d=0;
    double suma=0;

    for(i=1;i<=5;i++)
    {
        if (numero[i]%5==0)
        {
            d++;
        }

        suma = d + numero[i];
    }

    return suma/5;
}

void menor (int numero[], int & mini)
{
    int i;
    if (numero[i]<mini)
    {
        mini = numero[i];
    }
}

int main()
{
    ingreso(numero);
    menor (numero, mini);
    m= maxi(numero);
    suma=prom(numero);

    cout<<"El numero mayor es..."<<maxi<<"\n";
    cout<<"El promedio de numeros divisibles de 5 es..."<<prom<<"\n";

    return 0;
}
