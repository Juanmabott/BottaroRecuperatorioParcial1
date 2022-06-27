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

void actualizarRecuperados(ePais pais,int recuperadosDia)
{
    pais.recuperados+=recuperadosDia;
}


int ordenarCaracteres(char vec[], int tam)
{
  int todoOk=0;
  char Aux;

if(vec != NULL && tam>0)
{
for(int i=0; i < tam-1; i++)
    {
        for (int j= i+l; j < tam; j++) {
                if(vec)
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
