#include <stdio.h>

#include <stdlib.h>
/* atoi: conviete de cadena a enteros. */

/* Es necesario poner los dos parentesís. */
int main(int argc, char** argv){
         /* Podemos poner como parámetros ciertos valores. argv son los argumen-
         tos y argc el número de argumentos */

    /* ---------- Parte 1 --------- */

    /* Mandamos a imprimir. */
    printf("UWU\n");

    /* ---------- Parte 2 --------- */
    /* Tenemos que poner el & pues buscamos una dirección de memoria donde guar-
    dar. */
    int a;
    scanf("%d",&a);

    int i;
    for(i = 0 ; i < a ; i++)
        printf("%d",argc);

    return 0;
}

/* Para compilar usamos gcc y el archivo y nos devuelve un ejecutable que pasa-
mos en terminal poniendo la direccion ./<archivo>, es necesario poner ./ pues sí
no el sistema lo busca en las variables de entorno. */
