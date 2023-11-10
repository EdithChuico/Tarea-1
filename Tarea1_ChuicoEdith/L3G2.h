#ifndef L3G2_H_INCLUDED
#define L3G2_H_INCLUDED
#include <iostream>
#include <algorithm>
#include <string.h>
#include "L2G2.h"
using namespace std;

void buscarBinaria(const char* NombreMed[], const char* palabra, int n);
void OrdenamientoInserccion(const char* NombreMed[], int n);
 void BusquedaSecuencial(const char* NombreMed[], const char* palabra, int nG2);
const char* NombreMed[20]={"ibuprofeno", "paracetamol", "amoxicilina", "loratadina", "diclofenaco","naproxeno", "omeprazol","meloxicam","ambroxol","codeina","clotrimazol","acido acetilsalicilico","losartan","enalapril","simvastatina","lidocaina","dexametasona","amiodarona","gentamicina","atorvastatina" };

struct Medicamento{
char NomMed[100];
string Lab;
string Grupo_Med;
float Precio_Uni;
}Medicamentos;

struct Cliente{
char Nom_Ape[20];
string Cedula;
string Direccion;
string Celular;
string Correo;
struct Medicamento infoMedicinas;
}medicinas[10];

struct Compra{
int Cant_Med;
float PrecioTotal;
float descuento;
};

void Datos_Medicina(const char* NombreMed[20]){
    //string respuesta;
    int cant;
cout<<"========== Bienvenido =========="<<endl;
cout<<"Listado de medicamentos en Stock "<<endl;
cout<<"(Odernamiento Inserccion)"<<endl;
int n=20;
OrdenamientoInserccion(NombreMed, n);

cout<<"Que medicamento desea comprar  (busqueda binaria)"<<endl;
cin.getline(Medicamentos.NomMed,100);
cin.ignore();
buscarBinaria(NombreMed,Medicamentos.NomMed,n);}



#endif // L3G2_H_INCLUDED
