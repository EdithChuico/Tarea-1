#ifndef LIB1G2_H_INCLUDED
#define LIB1G2_H_INCLUDED
#include <iostream>
#include "L2G2.h"
using namespace std;
#include <iostream>
#include<stdlib.h>
using namespace std;
void EncabezadoG2();
void  MenuG2();
void EncabezadoG2(){
    int i,j;
    string aux;
    cout<<"======================="<<endl;
    cout<<"INTEGRANTES: (Ordenamiento Burbuja y Arreglo Unidimensional)"<<endl;

    OrdenamientoBurbuja(DatoG2);

    cout<<"======================="<<endl;
    string DatosG2[9][2];
       DatosG2[0][0]="INSTITUCION: ";
       DatosG2[1][0]="CARRERA: ";
       DatosG2[2][0]="NIVEL: ";
       DatosG2[3][0]="PARALELO: ";
       DatosG2[4][0]="MATERIA: ";
       DatosG2[5][0]="DOCENTE: ";
       DatosG2[6][0]="FECHA: ";
       DatosG2[7][0]="PERIODO: ";
       DatosG2[0][1]="UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE";
       DatosG2[1][1]="TECNOLOGIAS DE LA INFORMACION ";
       DatosG2[2][1]="1 ERO ";
       DatosG2[3][1]="A";
       DatosG2[4][1]="FUNDAMENTOS DE PROGRAMACION";
       DatosG2[5][1]="ING. VERONICA ISABEL MARTINEZ ";
       DatosG2[6][1]="07/08/2023";
       DatosG2[7][1]="PREGRADO S1 MAYO-SEPTIEMBRE ";
    for(i=0;i<8;i++){
        for(j=0;j<2;j++){
            cout<<DatosG2[i][j]<<endl;
        }}
        cout<<"(Arreglo Bidimensional)"<<endl;
        cout<<"---------------------------------------------------"<<endl;
         MenuG2();
}
void MenuG2(){
    int menuG2;
    do{
        cout<<"================================="<<endl;
        cout<<"ESTRUCTURAS DE DATOS  (Ordenamiento seleccion)"<<endl;
        OrdenamientoSeleccionMenu( DatossG2);
        cout<<"Elija una opcion (1-3): "<<endl;
        cin>>menuG2;
        switch(menuG2){
        case 1:
        Datos_Medicina(NombreMed);
            break;
        case 2:

            break;
        case 3:
            cout<<"Gracias por usar"<<endl;
            break;
        default:
            break;
        }
    }while(menuG2!=3);
}
#endif // LIB1G2_H_INCLUDED
