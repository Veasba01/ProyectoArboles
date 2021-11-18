#ifndef ARBOLEBAIS_H
#define ARBOLEBAIS_H
class ArbolEbais{

public:
	NodoEbais *raizPtr;//Cabeza
	int auxX=0;
	
	
	ArbolEbais(){
		this->raizPtr=NULL;
	}
	void setRaizPtr(NodoEbais *nodoEbais){
		this->raizPtr=nodoEbais;
	}
		NodoEbais* getRaizPtr(){
		return this->raizPtr;
	}
	bool esVacio(){
		return (raizPtr==NULL?true:false);
	}
	//Crea un NodoArbolEbais con informacion
	// Sin Enlaces asignados
	NodoEbais *crearNodo(Ebais ebais){
		NodoEbais *nuevo_nodo = new NodoEbais();
		nuevo_nodo->setEbais(ebais);
		nuevo_nodo->setIzquierdaPtr(NULL);
		nuevo_nodo->setDerechaPtr(NULL);
		return nuevo_nodo;
	}
	
	void insertarNodo(NodoEbais *&raizPtr, Ebais ebais){
		if(raizPtr==NULL){
			NodoEbais *nuevo_nodo=crearNodo(ebais);
			raizPtr=nuevo_nodo;
		}else {
			int valorRaiz = (raizPtr)->getEbais(). getId();
			if(ebais.getId() < valorRaiz){
				insertarNodo(raizPtr->izquierdaPtr,ebais);
			}else if (ebais.getId()==valorRaiz){
				cout<<"Ebais repetido"<<endl;
				system("pause>0" );
			}else { 
				insertarNodo(raizPtr->derechaPtr,ebais);
			}
		}
	}
	void gotoxy(int x, int y){
		COORD coordinate;
		coordinate.X=x;
		coordinate.Y=y;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinate);
	}
	void imprimirArbol(NodoEbais *raizPtr, int auxY){
		if(raizPtr==NULL){
			return;
		}else{
			auxX+=4;
			imprimirArbol(raizPtr->getIzquierdaPtr(),auxY+2);
			gotoxy(1+auxX-auxY,auxY);
			cout<<raizPtr->getEbais().getNombre()<<endl<<endl;
			imprimirArbol(raizPtr->getDerechaPtr(),auxY+2);
		}
	}
		
	void preOrden(NodoEbais *raizPtr){//RID
		if(raizPtr!=NULL){
			cout<<raizPtr->getEbais().toString()<<" ";
			preOrden(raizPtr->getIzquierdaPtr());
			preOrden(raizPtr->getDerechaPtr());
		}
	}
	void postOrden(NodoEbais *raizPtr){//IDR
		if(raizPtr!=NULL){			
			postOrden(raizPtr->getIzquierdaPtr());
			postOrden(raizPtr->getDerechaPtr());
			cout<<raizPtr->getEbais().toString()<<" ";
		}
	}
	void enOrden(NodoEbais *raizPtr){//IRD
		if(raizPtr!=NULL){
			enOrden(raizPtr->getIzquierdaPtr());
			cout<<raizPtr->getEbais().toString()<<" ";
			enOrden(raizPtr->getDerechaPtr());
			
		}
	}
		void buscarEbais(string nombre, NodoEbais *aux){
			if(aux==NULL){
				cout<<" No ha ingresado ningun Ebais"<<endl;
			}else{
				if(aux->getEbais().getNombre()==nombre){
					cout<<" El Ebais Si Existe!! "<<endl;
				
				}else{
					if(aux->getDerechaPtr()!=NULL){
						buscarEbais(nombre,aux->getDerechaPtr());
					}
					if(aux->getIzquierdaPtr()!=NULL){
						buscarEbais(nombre,aux->getIzquierdaPtr());
					}else{
						cout<<" El Ebais NO Existe!! "<<endl;
						
					}
				}
			}
		}

};
#endif
