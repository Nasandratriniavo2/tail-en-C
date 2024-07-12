#include <stdio.h>
#include "liat.h"


int main(int argc,char* argv[])
{
    int nombre;
    char filePath[100];
    FILE* fichier=NULL;
    nombre=creationOption(argv);
    ouvertureFichier(fichier,argc,argv,filePath,nombre);
    return(0);    
}
