#include <stdio.h>
#include <string.h>

#define Max 999 //constante de maximas personas (999 xq en C empieza de 0-999 serian mil)

typedef struct {
    char names[Max];          //arreglo con los nombres 
    int cant;           //cantidad de nombres
} TData;

TData listName; // definimos la lista
char nuevoNombre;


int vacia(TData); //funcion 
int llena(TData); //funcion
void insertName(TData *name, char *newName); //accion
void suprimir(TData arreglo); //accion
void mostrar(TData arr ); //accion


int main(){
    listName.cant = 0; //la lista comienza vacia 
    insertName(&listName, &nuevoNombre);
    insertName(&listName, &nuevoNombre);
    insertName(&listName, &nuevoNombre);
    //suprimir(listName);
    mostrar(listName);
    system("PAUSE");
	return 0;
}

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

void insertName(TData *name, char *newName) {
    if (llena(*name)) //si esta llena la lista...
    {
        printf("la lista esta llena, no puedes agregar mas nombres\n"); // si esta lleno no puede agregar mas
    }else if (vacia(*name)) // si esta vacia la lista...
    {
        printf("Ingrese el nombre:  ");
        scanf("%s", &name->names[0]); //asignamos a la posicion 0 el nombre que ingresemos
        name->cant = 1;  //le ponemos 1 a la cantidad
    }else {
        printf("Ingrese el nombre:  ");
        scanf("%s", &name->names[name->cant+1]);
        name->cant += 1; // sumamos 1 a la cantidad
    }

    // printf("%d", name->cant); prueba que funciona 
    
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
