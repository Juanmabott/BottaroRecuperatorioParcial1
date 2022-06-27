#include <stdio.h>
#include <stdlib.h>

void inviertirCadena(char cadena[], char cadinvertida[]);
void actualizarRecuperados(ePais pais,int recuperadosDia);
int ordenarCaracteres(char vec[], int tam);
int main()
{
    char cadena[10]="algoritmo";

    char cad[10] = "UTN-FRA";
    char cadinvertida[10];

    invierte(cad, cadinvertida);

    printf("\nLa cadena invertida es %s. ", cadinvertida);

    return 0;
}

void inviertirCadena(char cadena[], char cadinvertida[])
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
   for(int i = 0; i < tamanio;i++)
	{
		for(int j = 0; j < tamanio; j++)
		{
			if(cadena[i] > vocales[j])
			{
				aux = cadena[i];
				cadena[i] = cadena[j];
				cadena[j] = aux;
			}
		}
	}
    puts(cadena);
	return contador;
}
