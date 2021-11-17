#include<iostream>
using namespace std;
#include <windows.h>
#include "Hospital.h"
#include "NodoHospital.h"
#include "ArbolHospital.h"
void menuhospital(){
	int opcion=0, opc=0;
	int id=0;
	string provincia ="";
	Hospital hospital;
	ArbolHospital *arbolHospital = new ArbolHospital();
	do{
		system("cls");
		cout<<"\t****MENU DE PROVINCIAS****"<<endl
			<<"1. San José"<<endl
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
			provincia ="San Jose";			
			cout<<"Rango de ID valido: 100 - 199"<<endl;
			cout<<"Digite el ID del hospital: "<<endl;
			cin>>id;
			if(id < 100 && id >199){
				hospital.setId(id);
				hospital.setProvincia(provincia);
				arbolHospital->insertarNodo(arbolHospital->raizPtr,hospital);
				opc=0;
			}else{
				cout<<"El Hospital no fue agregado intentelo de nuevo";
			}
			system("pause");
			   break;
		case 2:
			provincia ="Alajuela";				
			cout<<"Rango de ID válido: 200 - 299"<<endl;
			cout<<"Digite el ID del hospital: "<<endl;
			cin>>id;
			if(id < 200 && id >299){
				hospital.setId(id);
				hospital.setProvincia(provincia);
				arbolHospital->insertarNodo(arbolHospital->raizPtr,hospital);
				opc=0;
			}else{
				cout<<"El Hospital no fue agregado intentelo de nuevo";
			}
			system("pause");
			   break;
		case 3:
			provincia ="Cartago";
			cout<<"Rango de ID válido: 300 - 399"<<endl;
			cout<<"Digite el ID del hospital: "<<endl;
			cin>>id;
			if(id < 300 && id >399){
				hospital.setId(id);
				hospital.setProvincia(provincia);
				arbolHospital->insertarNodo(arbolHospital->raizPtr,hospital);
				opc=0;
			}else{
				cout<<"El Hospital no fue agregado intentelo de nuevo";
			}
			system("pause");
			   break;
		case 4:
			provincia ="Heredia";
			cout<<"Rango de ID válido: 400 - 499"<<endl;
			cout<<"Digite el ID del hospital: "<<endl;
			cin>>id;
			if(id < 400 && id >499){
				hospital.setId(id);
				hospital.setProvincia(provincia);
				arbolHospital->insertarNodo(arbolHospital->raizPtr,hospital);
				opc=0;
			}else{
				cout<<"El Hospital no fue agregado intentelo de nuevo";
			}
			system("pause");
			   break;
		case 5:
			provincia ="Guanacaste";
			cout<<"Rango de ID válido: 500 - 599"<<endl;
			cout<<"Digite el ID del hospital: "<<endl;
			cin>>id;
			if(id < 500 && id >599){
				hospital.setId(id);
				hospital.setProvincia(provincia);
				arbolHospital->insertarNodo(arbolHospital->raizPtr,hospital);
				opc=0;
			}else{
				cout<<"El Hospital no fue agregado intentelo de nuevo";
			}
			system("pause");
			   break;
		case 6:
			provincia ="Puntarenas";
			cout<<"Rango de ID válido: 600 - 699"<<endl;
			cout<<"Digite el ID del hospital: "<<endl;
			cin>>id;
			if(id < 600 && id >699){
				hospital.setId(id);
				hospital.setProvincia(provincia);
				arbolHospital->insertarNodo(arbolHospital->raizPtr,hospital);
				opc=0;
			}else{
				cout<<"El Hospital no fue agregado intentelo de nuevo";
			}
			system("pause");
			   break;
		case 7:
			provincia ="Limon";
			cout<<"Rango de ID válido: 700 - 799"<<endl;
			cout<<"Digite el ID del hospital: "<<endl;
			cin>>id;
			if(id < 700 && id >799){
				hospital.setId(id);
				hospital.setProvincia(provincia);
				arbolHospital->insertarNodo(arbolHospital->raizPtr,hospital);
				opc=0;
			}else{
				cout<<"El Hospital no fue agregado intentelo de nuevo";
			}
			system("pause");
			   break;
		}
	}while(opc!=0);
	
}
	
	void Menu(){
		int opcion=0, opc=0;
		int id=0;
		string provincia ="";
		Hospital hospital;
		ArbolHospital *arbolHospital = new ArbolHospital();
		do{
			system("cls");
			cout<<"\t****MENU DE OPCIONES"<<endl
				<<"1. Agregar Hospital"<<endl
				<<"2. Imprimir arbol"<<endl
				<<"3. PostOrden"<<endl
				<<"4. PreOrden"<<endl
				<<"5. InOrden"<<endl
				<<"0. Salir"<<endl
				<<"Elija?: ";
			cin>>opcion;
			switch(opcion){
			case 1:
				menuhospital();
				break;
			case 2:
				system("cls");
				arbolHospital->imprimirArbol(arbolHospital->getRaizPtr(),0);
				system("pause");
				break;
			case 3:
				system("cls");
				arbolHospital->imprimirArbol(arbolHospital->getRaizPtr(),0);
				arbolHospital->postOrden(arbolHospital->getRaizPtr());
				system("pause");
				break;
			case 4:
				arbolHospital->preOrden(arbolHospital->getRaizPtr());
				system("pause");
				break;
			case 5:
				arbolHospital->enOrden(arbolHospital->getRaizPtr());
				system("pause");
				break;
			}
		}while(opcion!=0);
	}
int main (int argc, char *argv[]) {
	
	Menu();
	return 0;
}

