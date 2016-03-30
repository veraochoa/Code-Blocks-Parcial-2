#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>

using namespace std;
char nombre [5][30];

void ingresoCadena(char nombre[5][30])
{
    for (int i=0;i<5;i++)
    {
        cout<<"Ingresar el nombre"
        cin.getline(nombre[i],30);
    }
}

int main()
{

    return 0;
}
