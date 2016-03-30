#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h> //* manejo de cadenas de texto*//

using namespace std;
struct alumno
{
    char nombre[30];
    int p1,p2,p3,promedio;
    char obs[15];
};

alumno alum[5];

void ingreso(alumno & alum)
{
   cout<<"Nombre del alumno";
   cin.getline(alum.nombre,30);
   cout<<"Parcial 1...";
   cin>>alum.p1;
   cout<<"Parcial 2...";
   cin>>alum.p2;
   cout<<"Parcial 3...";
   cin>>alum.p3;

}

void ingresoarreglo(alumno alum[])
{
    int i;
    for (i=0;i<5;i++)
    {
        ingreso(alum[i]);
    }
}

void calcular(alumno &alum)
{
    alum.promedio=(alum.p1+alum.p2+alum.p3)/3;
    if (alum.promedio>=60)
    {
        strcpy(alum.obs,"Aprobado");
    }
    else
    {
        strcpy(alum.obs, "Reprobado");
    }

void calculararreglo (alumno alum[])
{
    int i;
    for (i=0;i<5;i++)
    {
        calcular(alum[i]);
    }
}

void presentar (alumno alum)
{
    cout<<"Alumno"<<alum.nombre<<" "<<"Nota"<<alum.promedio<<"obs"<<alum.obs<<"\n";
}

void presentararreglo (alum alum[])
{
    int i;
    for (i=o;i<5;i++)
    {
        presentar(alum[i]);
    }
}

int main()
{
    ingresoarreglo(alum);
    calculararreglo(alum);
    presentararreglo(alum);
    return 0;
}
