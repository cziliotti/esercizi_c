#include <stdio.h>

int leggi_dim();
void scan_vettore(char v[], int dim);
void valuta_vettore(char v1[], int dim1, char v2[], int dim2);

int main(void){
    int dim1=leggi_dim();
    int dim2=leggi_dim();
    char v1[dim1];
    char v2[dim2];
    scan_vettore(v1,dim1);
    scan_vettore(v2,dim2);
    valuta_vettore(v1,dim1,v2,dim2);
    return 0;

}

int leggi_dim(){
    int dim=0;
    printf("Inserisci la dimensione dell'array\n");
    scanf("%d",&dim);
    return dim;
}

void scan_vettore(char v[], int dim){
    printf("Inserisci i caratteri dell'array\n");
    for(int i=0;i<dim;++i){
        scanf("%c",&v[i]);
    }
}

void valuta_vettore(char v1[], int dim1, char v2[], int dim2){
    int conta=0;
    for(int i=0;i<dim1;++i){
        for(int j=0;j<dim2;++j){
            if(v2[j]-v1[i]==1){
                conta++;
                j=dim2; //quando trovo la lettera successiva esco dal ciclo for 
            }
        }
    }

    if(conta==dim1){
        printf("true\n");
    }
    else{
        printf("false\n");
    }
    
}