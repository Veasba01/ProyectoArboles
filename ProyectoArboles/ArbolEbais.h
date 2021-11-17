#ifndef ARBOLEBAIS_H
#define ARBOLEBAIS_H
class ArbolEbais{

public:
	NodoEbais *raizPtr;//Cabeza
	int auxX=0;
	
	
	ArbolEbais(){
		this->raizPtr=NULL;
	}
	void setRaizPtr(NodoEbais *NodoEbais){
		this->raizPtr=NodoEbais;
	}
	NodoArbolEbais* getRaizPtr(){
		return this->raizPtr;
	}
	bool esVacio(){
		return (raizPtr==NULL?true:false);
	}
	//Crea un NodoArbolEbais con informacion
	// Sin Enlaces asignados
	NodoArbol *crearNodo(int dato){
		NodoArbol *nuevo_nodo = new NodoEbais();
		nuevo_nodo->setDato(dato);
		nuevo_nodo->setIzquierdaPtr(NULL);
		nuevo_nodo->setDerechaPtr(NULL);
		return nuevo_nodo;
	}
	
	void insertarNodo(NodoArbol *&raizPtr, int dato){
		if(raizPtr==NULL){
			NodoArbol *nuevo_nodo=crearNodo(dato);
			raizPtr=nuevo_nodo;
		}else{
			int valorRaiz = (raizPtr)->getDato();
			if(dato < valorRaiz){
				insertarNodo(raizPtr->izquierdaPtr,dato);
			}else if(dato == valorRaiz){
				cout<<"Repetido"<<endl;
				system("pause>0");
			}else{
				insertarNodo(raizPtr->derechaPtr,dato);
			}
		}
	}
	void gotoxy(int x, int y){
		COORD coordinate;
		coordinate.X=x;
		coordinate.Y=y;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinate);
	}
	void imprimirArbol(NodoArbol *raizPtr, int auxY){
		if(raizPtr==NULL){
			return;
		}else{
			auxX+=4;
			imprimirArbol(raizPtr->getIzquierdaPtr(),auxY+2);
			gotoxy(1+auxX-auxY,auxY);
			cout<<raizPtr->getDato()<<endl<<endl;
			imprimirArbol(raizPtr->getDerechaPtr(),auxY+2);
		}
	}
		
	void preOrden(NodoArbol *raizPtr){//RID
		if(raizPtr!=NULL){
			cout<<raizPtr->getDato()<<" ";
			preOrden(raizPtr->getIzquierdaPtr());
			preOrden(raizPtr->getDerechaPtr());
		}
	}
	void postOrden(NodoArbol *raizPtr){//IDR
		if(raizPtr!=NULL){
			postOrden(raizPtr->getIzquierdaPtr());
			postOrden(raizPtr->getDerechaPtr());
			cout<<raizPtr->getDato()<<" ";
		}
	}
	void enOrden(NodoArbol *raizPtr){//IRD
		if(raizPtr!=NULL){
			enOrden(raizPtr->getIzquierdaPtr());
			cout<<raizPtr->getDato()<<" ";
			enOrden(raizPtr->getDerechaPtr());
			
		}
	}
		

};
#endif
