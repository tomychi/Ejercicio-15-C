#include <stdio.h>
#include <string.h>

#define Max 999 //constante de maximas personas

typedef struct {
    char names[Max];          //arreglo con los nombres 
    int cant;           //cantidad de nombres
} TData;

TData listName; // definimos la lista
char nuevoNombre;


int vacia(TData); //funcion 
int llena(TData); //funcion
void insertName(TData name, char *newName); //accion
void suprimir(TData arreglo); //accion
void mostrar(TData arr ); //accion

int vacia(TData lName){
    if ( listName.cant == 0)
    {
        return 1;
    }else{
        return 0;
    }
    //usamos 1 como valor logico verdadero y 0 como falso
}

int llena(TData liNanme){
    if (liNanme.cant == 999)
    {
        return 1;
    }else{
        return 0;
    }
    //usamos 1 como valor logico verdadero y 0 como falso
}

void insertName(TData name, char *newName) {
    if (llena(name))
    {
        printf("la lista esta llena, no puedes agregar mas nombres\n");
    }
    if (vacia(name))
    {
        printf("Ingrese el nombre:  ");
        scanf("%s", &(*newName));
        name.names[0] = *newName;
        name.cant = 1;  //le sumamos 1 a la cantidad  
    }

    
}

void suprimir(TData arreglo){
    int i;
    for(i = 0; i <= arreglo.cant; i++){
        arreglo.names[i] = arreglo.names[i+1];
    }
    arreglo.cant -= 1; 
}

void mostrar(TData arr){
    int i;
    printf("Los nombres de la lista son:\n");
    for ( i = 0; i <= arr.cant; i++)
    {
        printf("%d - %s\n",i+1, arr.names[i]);
    }

    
    
}


int main(){
    listName.cant = 0; //la lista comienza vacia 


    insertName(listName, &nuevoNombre);
    //suprimir(listName);
    mostrar(listName);
    system("PAUSE");
	return 0;
}