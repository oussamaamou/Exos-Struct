#include<stdio.h>


typedef struct{
    char Nom[20];
    char Prenom[20];
    int Age;
    

}Personne;

int main(){
    Personne Prsnn1 = {"Rachad","Ahmed",26};
    printf("Le Nom de cette personne est : %s\n",Prsnn1.Nom);
    printf("Le Prenom de cette personne est : %s\n",Prsnn1.Prenom);
    printf("L'Age de cette personne est : %d",Prsnn1.Age);
 
return 0;
}
