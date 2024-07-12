#include <stdio.h>
#include <stdlib.h>
#include "liat.h"
#include <string.h>

void erreur()
{
    printf("Erreur:Ouverture fichier!!\n");
    exit(1);
}

int creationOption(char* argv[])
{   
    return(atoi(argv[2]));
}

void ouvertureFichier(FILE*fichier,int argc,char* argv[],char* filePath,int nombre)
{
    fichier=fopen(argv[3],"r");
    if(fichier==NULL)
    {
        erreur();    
    }
    else
        traitementFichier(fichier,argc,argv,filePath,nombre);
}
   
void traitementFichier(FILE*fichier,int argc,char* argv[],char* filePath,int nombre)
{
    int count=0,a=0;
    while(fgets(filePath,100,fichier)!=NULL)
        count++;    
    rewind(fichier);

    while(fgets(filePath,100,fichier)!=NULL)
    {
        if(a>=count-nombre)
            printf("%s",filePath);
            a++;
    }
    fclose(fichier);
}