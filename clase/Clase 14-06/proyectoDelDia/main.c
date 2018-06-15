#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "persona.h"
int parserEmployee(char* fileName, ArrayList* pArrayList);
int printfEmployee(ArrayList* pArrayList);

int main()
{
    ArrayList* pArrayList  = al_newArrayList();
    parserEmployee("destinatarios.csv",pArrayList);
    ArrayList* pBlackList  = al_newArrayList();
    parserEmployee("black_list.csv",pBlackList);
    return 0;
}

int printfEmployee(ArrayList* pArrayList)
{
    int i;
    char email[128];
    EPersona* aux;
    for(i=0;i<pArrayList->size;i++)
    {
        aux =al_get(pArrayList,i);
        persona_getEmail(aux,email);
        printf("%s\n",email);

    }
    return 0;
}

int parserEmployee(char* fileName, ArrayList* pArrayList)
{
    char name[128];
    char email[128];
    FILE* fp = fopen(fileName, "r");
    if(fp!=NULL)
    {
        printf("Abrir el archivo!\n");
        do
        {

            int parts = fscanf(fp,"%[^,],%[^\n]\n",name,email);
            if(parts==2)
            {
                EPersona* aux = persona_new();
                persona_setNombre(aux,name);
                persona_setEmail(aux,email);
                al_add(pArrayList,aux);
                //printf("%s %s\n",name,email);

            }
        }while(!feof(fp));
        printfEmployee(pArrayList);
    }
    return 0;
}
int compareSort(ArrayList* pArrayList, ArrayList* pBlackList)
int i;
for(i=0;i<al_len(blackList);i++)
{
    ArrayList* aux = al_get(blackList,i++);
    int index = al_indexOf()

}

