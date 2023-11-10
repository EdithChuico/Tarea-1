#ifndef L2G2_H_INCLUDED
#define L2G2_H_INCLUDED
#include "L3G2.h"
#include <iostream>
#include<stdlib.h>
#include <string.h>
using namespace std;
string DatoG2[3]={"Lara Anderson", "Chuico Edith", "Jimenez Freddy"};
string DatossG2[3]={"1. Venta","2.  Registro de ventas ","3. Salir"};
void OrdenamientoBurbuja(string DatoG2[3]);
void OrdenamientoSeleccionMenu(string DatossG2[3]);
void OrdenamientoInserccion(const char* NombreMed[20], int n);
void buscarBinaria(const char* NombreMed[], const char* palabra, int n);
void BusquedaSecuencial(const char* NombreMed[], const char* palabra, int nG2);

void OrdenamientoBurbuja(string DatoG2[3]){
for(int i=0;i<3-1;i++){
        for(int j=0;j<3-i-1;j++){
            if (DatoG2[j]>DatoG2[j+1]){
                string aux=DatoG2[j];
                DatoG2[j]=DatoG2[j + 1];
                DatoG2[j+1]=aux;
                }
            }
        }
    for(int i=0;i<3;i++){
            cout<<DatoG2[i]<<endl;
}
}
void OrdenamientoSeleccionMenu(string DatossG2[3]){
int i, j, min, pos;
        string aux;
        for(i=0;i<3;i++){
        min=i;
        for(j=i+1;j<3;j++){
            if(DatossG2[j]<DatossG2[min]){
                min=j;
            }
        }
        aux=DatossG2[i];
        DatossG2[i]=DatossG2[min];
        DatossG2[min]=aux;
        }
        for(i=0;i<3;i++){
            cout<<DatossG2[i]<<endl;
        }

}
void OrdenamientoInserccion(const char* NombreMed[20], int n){
    int i;
    const char* aux;
    int pos;
    for(i=0;i<n;i++){
        pos=i;
        aux=NombreMed[i];
        while((pos>0)&&(strcmp(NombreMed[pos-1],aux)>0)){
            NombreMed[pos]=NombreMed[pos-1];
            pos--;
        }
        NombreMed[pos]=aux;
    }
    for(i=0;i<n;i++){
        cout<<"Medicamento "<<i+1<<": "<<NombreMed[i]<<endl;
    }
}
void buscarBinaria(const char* NombreMed[], const char* palabra, int n) {
    int inicio = 0;
    int fin = n - 1;
    int medio;
medio=0;
    char band = 'F';
    while (inicio <= fin) {
       medio = (inicio + fin) / 2;

    if (stricmp(NombreMed[medio], palabra) == 0) {
        band = 'V';
        break;
    }

    if (stricmp(NombreMed[medio], palabra) > 0) {
        fin = medio - 1;
    } else {
        inicio = medio + 1;
    }
    }

    if (band == 'V') {
      cout << "El medicamento si existe, se encuentra en la posicion " << medio+1 << endl;
    } else {
      cout << "Medicamento no disponible" << endl;
    }
    }
void BusquedaSecuencial(const char* NombreMed[], const char* palabra, int nG2){
        int i;
        char band= 'F';


    while ((band=='F')&&(i<nG2)){
        if (stricmp(NombreMed[i],palabra)==0){
                band='V';
        }
        i++;
    }
    if(band=='F'){
        cout<<"Dato no encontrado"<<endl;
    }else{
        cout<<"Dato encontrado en la posicion "<<i<<endl;
    }
}
#endif // L2G2_H_INCLUDED
