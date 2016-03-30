#include <iostream>
#include<stdio.h>
#include<time.h>

using namespace std;

const int lin=3;
const int col=4;
int mayor;

int num [lin][col];

void ingreso (int num [lin][col])
{
    for (int l=0;l<lin;l++)
    {
        for (int c=0;c<col-1; c++)
        {
            num[l][c]= 1 + rand() % (100-1);;
        }
    }
}

void ingreso2 (int num [lin][col])
{
    for (int l=0;l<lin;l++)
    {
        for (int c=0;c<col-1; c++)
        {
            cout<<"Numero["<<l<<"]["<<c<<"]..";
            cin>>num[l][c];
        }
    }
}

void columnamayor (int num [lin][col])
{
  int ul=col-1;

  for (int l=0; l<lin; l++)
    {
        for (int c=0;c<col-1; c++)
        {
            if (num[l][c]>num [l][ul]
                {
                   num[l][c]=num[ul][c];
                }
        }
    }
}

void presentar (int num[lin][col])
{
 for (int l=0; l<lin;l++)
    {
        for (int c=0;c<col; c++)
        {
            cout<<num[l][c]<<" ";
        }
        cout<<"\n";
    }
}

int main()
{
    srand(time(0));
    ingreso(num);
    presentar(num);
    columnamayor(num);


    return 0;
}
