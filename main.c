#include <stdio.h>
#include <stdlib.h>

void invierte(char cadena[], char cadinvertida[]);
void actualizarRecuperados(ePais pais,int recuperadosDia);
int main()
{
    char cad[10] = "UTN-FRA";
    char cadinvertida[10];

    invierte(cad, cadinvertida);

    printf("\nLa cadena invertida es %s. ", cadinvertida);

    return 0;
}

void invierte(char cadena[], char cadinvertida[])
{
    int longitud;
    int j;

    longitud = strlen(cadena);
    j = longitud-1;

    for (int i=0;i<longitud;i++)
    {
        cadinvertida[i] = cadena[j];
        j--;
    }
    cadinvertida[longitud]='\0';
    return;
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
