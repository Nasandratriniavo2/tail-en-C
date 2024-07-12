#ifndef __LIAT_H__
#define __LIAT_H__
    
    void erreur();
    void ouvertureFichier(FILE* fichier,int argc,char* argv[],char* filePath,int nombre);
    void traitementFichier(FILE* fichier,int argc,char* argv[],char* filePath,int nombre);
    int creationOption(char* argv[]);

#endif