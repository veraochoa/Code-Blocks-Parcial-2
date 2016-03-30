#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

 struct emple
 {
     char nombre[30];
     int ventas[3];
     double total, comis, tp;
 };

  emple empleados [5];

  /*Rocedimiento de ingreso del nombre y las ventas de todos los empleados */

void ingreso (emple empleados[])
{
    int i, k;
    for(i=0;i<5;i++)
    {
        cout<<"Nombre del empleado...";
        cin.getline(empleados[i].nombre,30);

        for(k=0;k<3;k++)
        {
            cout<<"Ventas ..."<<k<<"\n";
            cin>>empleados[i].ventas[k];
        }
        _flushall();
    }
}

/*Elaborar un procedimiento para calcular el total de las ventas,
la comision que es el 5% del total de ventas*/

int calcular (emple empleados[])
{
    int k,i;
    for(i=0;i<5;i++)
    {
        empleados[i].total=0;

     for(k<0;k<3;k++)
     {
      empleados[i].total=empleados[i].ventas[k];
     }
    empleados[i].comis= empleados[i].total * 0.05;
    }
}

void presentar (emple empleados[])
{
    int i,k;
    for(i=0;i<5;i++)
    {
        cout<<"Empleados"<<empleados[i].nombre<<"\n";
    }
    for(k=0;k<3;k++);
    {
        cout<<"Venta"<<k+1<<"...:"<<empleados[i].ventas[k]<<"\n";
    }
    cout<<"Total Ventas"<<empleados[i].total<<"\n";
    cout<<"Comision"<<empleados[i].comis<<"\n";
    cout<<"\n\n";
}


int main()
{
    ingreso(empleados);
    calcular(empleados);
    presentar(empleados);

    return 0;
}
