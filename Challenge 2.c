#include<stdio.h>

typedef struct{
    char Nom[15];
    char Prenom[15];
    int Note[6];
}Etudiants;

int main(){
    
    Etudiants Etudiant ;
    int n,i;
    printf("Entrer le nom de l'etudiant:");
    scanf(" %[^\n]%*c",&Etudiant.Nom);
    printf("Entrer le prenom de l'etudiant:");
    scanf(" %[^\n]%*c",&Etudiant.Prenom);

    for(i=0;i<6;i++){
        printf("Entrer la note %d de l'etudiant:",i+1);
        scanf(" %d",&Etudiant.Note[i]);
    }
    printf("Le Nom de l'etudiant est : %s\n",Etudiant.Nom);
    printf("Le Prenom de l'etudiant est : %s\n",Etudiant.Prenom);
    for(i=0;i<6;i++)     
        printf("La note %d de l'etudiant est : %d\n",i+1,Etudiant.Note[i]);



    return 0;
}
