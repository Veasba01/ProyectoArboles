#include<iostream>
using namespace std;
#include <windows.h>
#include "Hospital.h"
#include "NodoHospital.h"
#include "ArbolHospital.h"

#include "Ebais.h"
#include "NodoEbais.h"
#include "ArbolEbais.h"
int main (int argc, char *argv[]) {
	int opc=0, id=0, opcion=0;
	string provincia ="", nombreHosp = "";
	Hospital hospital;
	ArbolHospital *arbolhospital = new ArbolHospital();
	ArbolEbais *arbolebais = new ArbolEbais();
 	do{
		system("cls");
		cout<<"\t****MENU DE OPCIONES"<<endl
			<<"1. Agregar Hospital"<<endl
			<<"2. Imprimir arbol"<<endl
			<<"3. PostOrden"<<endl
			<<"4. PreOrden"<<endl
			<<"5. InOrden"<<endl
			<<"6. Agregar Ebais"<<endl
			<<"0. Salir"<<endl
			<<"Elija?: ";
		cin>>opcion;
		switch(opcion){
		case 1:
			do{
				system("cls");
				cout<<"\t****MENU DE PROVINCIAS****"<<endl
					<<"1. San Jose"<<endl
					<<"2. Alajuela"<<endl
					<<"3. Cartago"<<endl
					<<"4. Heredia"<<endl
					<<"5. Guanacaste"<<endl
					<<"6. Puntarenas"<<endl
					<<"7. Limon"<<endl
					<<"0. Salir"<<endl
					<<"Elija?: ";
				cin>>opc;
				switch(opc){
				case 1:
					system("cls");				
					cout<<"Rango de ID valido: 100 - 199"<<endl;
					cout<<"Digite el ID del hospital: "<<endl;
					cin>>id;
					if(id > 100 && id <= 199){
						cout<<"Digite el Nombre del hospital: "<<endl;
						cin>>nombreHosp;
						provincia ="San Jose";
						hospital.setNombreHosp(nombreHosp);
						hospital.setId(id);
						hospital.setProvincia(provincia);
						arbolhospital->insertarNodo(arbolhospital->raizPtr,hospital);
						opc=0;
					}else{
						cout<<"ID invalido intentelo de nuevo";
					}
					system("pause");
					break;
				case 2:
					system("cls");			
					cout<<"Rango de ID válido: 200 - 299"<<endl;
					cout<<"Digite el ID del hospital: "<<endl;
					cin>>id;
					if(id > 200 && id <= 299){
						cout<<"Digite el Nombre del hospital: "<<endl;
						cin>>nombreHosp;
						provincia ="Alajuela";	
						hospital.setNombreHosp(nombreHosp);
						hospital.setId(id);
						hospital.setProvincia(provincia);
						arbolhospital->insertarNodo(arbolhospital->raizPtr,hospital);
						opc=0;
					}else{
						cout<<"ID invalido intentelo de nuevo";
					}
					system("pause");
					break;
				case 3:
					system("cls");
					cout<<"Rango de ID válido: 300 - 399"<<endl;
					cout<<"Digite el ID del hospital: "<<endl;
					cin>>id;
					if(id > 300 && id <= 399){
						cout<<"Digite el Nombre del hospital: "<<endl;
						cin>>nombreHosp;
						provincia ="Cartago";
						hospital.setNombreHosp(nombreHosp);
						hospital.setId(id);
						hospital.setProvincia(provincia);
						arbolhospital->insertarNodo(arbolhospital->raizPtr,hospital);
						opc=0;
					}else{
						cout<<"ID invalido intentelo de nuevo";
					}
					system("pause");
					break;
				case 4:
					system("cls");
					cout<<"Rango de ID válido: 400 - 499"<<endl;
					cout<<"Digite el ID del hospital: "<<endl;
					cin>>id;
					if(id > 400 && id <= 499){
						cout<<"Digite el Nombre del hospital: "<<endl;
						cin>>nombreHosp;
						provincia ="Heredia";
						hospital.setNombreHosp(nombreHosp);
						hospital.setId(id);
						hospital.setProvincia(provincia);
						arbolhospital->insertarNodo(arbolhospital->raizPtr,hospital);
						opc=0;
					}else{
						cout<<"ID invalido intentelo de nuevo";
					}
					system("pause");
					break;
				case 5:
					system("cls");
					cout<<"Rango de ID válido: 500 - 599"<<endl;
					cout<<"Digite el ID del hospital: "<<endl;
					cin>>id;
					if(id > 500 && id <= 599){
						cout<<"Digite el Nombre del hospital: "<<endl;
						cin>>nombreHosp;
						provincia ="Guanacaste";
						hospital.setId(id);
						hospital.setProvincia(provincia);
						hospital.setNombreHosp(nombreHosp);
						arbolhospital->insertarNodo(arbolhospital->raizPtr,hospital);
						opc=0;
					}else{
						cout<<"ID invalido intentelo de nuevo";
					}
					system("pause");
					break;
				case 6:
					system("cls");
					cout<<"Rango de ID válido: 600 - 699"<<endl;
					cout<<"Digite el ID del hospital: "<<endl;
					cin>>id;
					if(id > 600 && id <= 699){
						cout<<"Digite el Nombre del hospital: "<<endl;
						cin>>nombreHosp;
						provincia ="Puntarenas";
						hospital.setNombreHosp(nombreHosp);
						hospital.setId(id);
						hospital.setProvincia(provincia);
						arbolhospital->insertarNodo(arbolhospital->raizPtr,hospital);
						opc=0;
					}else{
						cout<<"ID invalido intentelo de nuevo";
					}
					system("pause");
					break;
				case 7:
					system("cls");			
					cout<<"Rango de ID válido: 700 - 799"<<endl;
					cout<<"Digite el ID del hospital: "<<endl;
					cin>>id;
					if(id > 700 && id <= 799){
						cout<<"Digite el Nombre del hospital: "<<endl;
						cin>>nombreHosp;
						provincia ="Limon";
						hospital.setNombreHosp(nombreHosp);
						hospital.setId(id);
						hospital.setProvincia(provincia);
						arbolhospital->insertarNodo(arbolhospital->raizPtr,hospital);
						opc=0;
					}else{
						cout<<"ID invalido intentelo de nuevo";
					}
					system("pause");
					break;
				}
			}while(opc!=0);
			break;
		case 2:
			system("cls");
			arbolhospital->imprimirArbol(arbolhospital->getRaizPtr(),0);
			system("pause");
			break;
		case 3:
			system("cls");			
			arbolhospital->postOrden(arbolhospital->getRaizPtr());
			system("pause");
			break;
		case 4:
			system("cls");	
			arbolhospital->preOrden(arbolhospital->getRaizPtr());
			system("pause");
			break;
		case 5:
			system("cls");	
			arbolhospital->enOrden(arbolhospital->getRaizPtr());
			system("pause");
			break;
		case 6:
			system("cls");	
			
			system("pause");
			break;
		}
	}while(opcion!=0);
	
	return 0;
}

