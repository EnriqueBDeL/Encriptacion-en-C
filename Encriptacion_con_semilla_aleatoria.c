#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


int Menu(){
int opcion;
printf("\n\n****MENU****");
printf("\n1. Encriptar mensaje.");
printf("\n2. Desencriptar mensaje.");
printf("\nIntroduce una opcion: "); scanf("%d",&opcion);
return opcion;
}



int main(){
    int opcion;
    int semilla;
    char mensaje[100];
    char mensajeEncriptado[100];

    // Inicializar el generador de números aleatorios
    srand(time(NULL));

    for(;;){
        opcion = Menu();

        switch(opcion){

case 1:
             printf("\n\nIntroduce el mensaje: "); scanf("%s",mensaje);

                semilla = rand() % 256;

                // Encriptar el mensaje
                int longitud = strlen(mensaje);
                for (int i = 0; i < longitud; i++) {
                    mensajeEncriptado[i] = mensaje[i] + semilla;
                }

                printf("\nMensaje original: %s", mensaje);
                printf("\nMensaje encriptado: |%s|", mensajeEncriptado);
                printf("\nSemilla utilizada: %d\n", semilla);
                break;


case 2:

    printf("\n\nIntroduce el mensaje encriptado: "); scanf("%s", mensajeEncriptado);
    fflush(stdin);
    printf("Introduce la semilla utilizada: "); scanf("%d", &semilla);


                // Desencriptar el mensaje
                longitud = strlen(mensajeEncriptado);
                for (int i = 0; i < longitud; i++) {
                    mensaje[i] = mensajeEncriptado[i] - semilla;
                }


                printf("\nMensaje desencriptado: |%s|", mensaje);

    break;


    }
   }
}
