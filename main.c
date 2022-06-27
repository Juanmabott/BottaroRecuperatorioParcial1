#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    return 0;
}


typedef struct
{
    int id;
    char nombre [20];
    int infectados;
    int recuperados;
    int muertos;
}ePais;




int ordenarVacunas(eVacuna vec[], int tam)
{
  int todoOk=0;
  eVacuna Aux;

if(vec != NULL && tam>0)
{
for(int i=0; i < tam-1; i++)
    {
        for (int j= i+l; j < tam; j++) { if( (vec[i].tipo > vec[j].tipo) ||
(vec[i].tipo == vec[j].tipo && vec[i].efectividad > vec[j].efectividad)
{
   aux = vec[i];
    vec[i] = vec[j];
    vec[j] = aux;
}
        }
    }
todook = 1;
}
return todook;
}
