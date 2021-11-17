#ifndef ARBOLHOSPITAL_H
#define ARBOLHOSPITAL_H
class ArbolHospital{
public:
	NodoHospital *raizPtr;//Cabeza
	int auxX=0;
	
	
	ArbolHospital(){
		this->raizPtr=NULL;
	}
	void setRaizPtr(NodoHospital *nodoHospital){
		this->raizPtr=nodoHospital;
	}
		NodoHospital* getRaizPtr(){
		return this->raizPtr;
	}
	bool esVacio(){
		return (raizPtr==NULL?true:false);
	}
	NodoHospital *crearNodo(Hospital hospital){
		NodoHospital *nuevo_nodo = new NodoHospital();
		nuevo_nodo->setHospital(hospital);
		nuevo_nodo->setIzquierdaPtr(NULL);
		nuevo_nodo->setDerechaPtr(NULL);
		return nuevo_nodo;
	}
	void insertarNodo(NodoHospital *&raizPtr, Hospital hospital ){
		if(raizPtr==NULL){
			NodoHospital *nuevo_nodo=crearNodo(hospital);
			raizPtr=nuevo_nodo;
		}else {
			int valorRaiz = (raizPtr)->getHospital(). getId();
			if(hospital .getId() < valorRaiz){
				insertarNodo(raizPtr->izquierdaPtr,hospital);
			}else if (hospital.getId()==valorRaiz){
				cout<<"ID Repetido"<<endl;
				system("pause>0" );
			}else { 
				insertarNodo(raizPtr->derechaPtr,hospital);
			}
		}
	}
	void gotoxy(int x, int y){
		COORD coordinate;
		coordinate.X=x;
		coordinate.Y=y;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinate);
	}
	void imprimirArbol(NodoHospital *raizPtr, int auxY){
		if(raizPtr==NULL){
			return;
		}else{
			auxX+=4;
			imprimirArbol(raizPtr->getIzquierdaPtr(),auxY+2);
			gotoxy(1+auxX-auxY,auxY);
			cout<<raizPtr->getHospital().getId()<<endl<<endl;
			imprimirArbol(raizPtr->getDerechaPtr(),auxY+2);
		}
	}
		
	void preOrden(NodoHospital *raizPtr){
		if(raizPtr!=NULL){
			cout<<raizPtr->getHospital().toString()<<" ";
			preOrden(raizPtr->getIzquierdaPtr());
			preOrden(raizPtr->getDerechaPtr());
		}
	}
	void postOrden(NodoHospital *raizPtr){
		if(raizPtr!=NULL){
			postOrden(raizPtr->getIzquierdaPtr());
			postOrden(raizPtr->getDerechaPtr());
			cout<<raizPtr->getHospital().toString()<<" ";
		}
	}
	void enOrden(NodoHospital *raizPtr){
		if(raizPtr!=NULL){
			enOrden(raizPtr->getIzquierdaPtr());
			cout<<raizPtr->getHospital().toString()<<" ";
			enOrden(raizPtr->getDerechaPtr());
			
		}
	}
};
#endif
