#include <iostream>

using namespace std;
int numero [5];

void Dato (int numero[])
{
    int i;
    for (i=0; i<=5; i++)
    {
        cout<<"Ingrese un numero";
        cin>>numero [1];
    }
}

void Presentar (int numero[])
{
    int i;
    for(i=1;i<=5;i++)
    {
        cout<<numero[i]<<"\n";
    }
}



int main()
{
    Dato(numero);
    Presentar(numero);

    return 0;
}
