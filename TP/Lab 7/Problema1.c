#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*Sa se citeasca datele (numele si  varsta) despre un numar oare care de persoane si
sa se memoreze intr-o structura. Sa se gaseasca o structura de date adecvata astfel incat
consumul de memorie sa fie optim. */
typedef struct{
    char *nume;
    int varsta;
}persoana;

int n;
persoana *tab;

void citire(void){
    int i,n;
    char buf[80];
    printf("Introduceti numarul de persoane: ");
    scanf("%d", &n);
    if(!(tab = (persoana*) malloc(n * sizeof(persoana)))){
        printf("Eroare alocare dinamica de memorie \n");
        exit(1);
    }
    for(i = 0; i < n; i++){
        printf("Introduceti numele persoanei: " );
        scanf("%s", buf);
        if(!(tab[i].nume = (char*)malloc(strlen(buf) + 1))){
            printf("Eroare alocare dinamica de memorie\n");
            exit(1);
        }
        strcpy(tab[i].nume,buf);
        printf("Introduceti varsta persoanei: ");
        scanf("%d", &tab[i].varsta);
        }
}
void afisare(persoana *p, int nr){

    printf("%s \t %d\n", 
            p[nr].nume,
            p[nr].varsta
    );

}

int main(){
    int i,n=0;
    persoana p[20];
    citire();
    for(i = 0; i <= n; i++)
    afisare(p,i);
    return 0;
}