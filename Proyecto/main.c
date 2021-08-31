/**
*Tema       : Matematicas Discretas
              Proyecto final
*
*@author    : Los Discretos
              Martin Noboa
              Aldrin Hernandez
*@date      : Octubre 24, 2018
*
*matricula  :
*             A01704052
*             A01704040
*
**/


//Include libraries
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "discretas.h"




int main(){

    int eleccion_principal = 0;
    int eleccion_primer = 0;
    int eleccion_segundo = 0;


    header();
    system("pause");
    system("cls");
    do{

        menuPrincipal();
        scanf("%i%*c", &eleccion_principal);
        system("cls");
        switch(eleccion_principal){

            case 1:
                menu_primerParcial();
                scanf("%i%*c", &eleccion_primer);
                system("cls");
                eleccion(eleccion_primer);
            break;

            case 2:
                menu_segundoParcial();
                scanf("%i%*c", &eleccion_segundo);
                system("cls");
                eleccionSegundo(eleccion_segundo);

            break;
        }

    }while (eleccion_principal != 3);



    return 0;
}

