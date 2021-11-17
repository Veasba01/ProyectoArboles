#ifndef NODOEBAIS_H
#define NODOEBAIS_H
class NodoEbais{
public:
	NodoEbais *izquierdaPtr;
	int dato;
	string ebais;
	NodoEbais *derechaPtr;
public:
	NodoEbais(){
		this->izquierdaPtr=NULL;
		this->dato=0;
		this->ebais="";
		this->derechaPtr=NULL;
	}
	NodoEbais(int dato){
		this->izquierdaPtr=NULL;
		this->dato=dato;
		this->ebais=ebais;
		this->derechaPtr=NULL;
	}
		void setIzquierdaPtr(NodoEbais *nodoEbais){
			this->izquierdaPtr=nodoEbais;
		}
			NodoEbais* getIzquierdaPtr(){
				return this->izquierdaPtr;
			}
				void setDato(int dato){
					this->dato=dato;
				}
					int getDato(){
						return this->dato;
					}
						void setEbais(string ebais){
							this->dato=dato;
						}
							string getEbais(){
								return this->ebais;
							}
								void setDerechaPtr(NodoEbais *nodoEbais){
									this->derechaPtr=nodoEbais;
								}
									NodoEbais* getDerechaPtr(){
										return this->derechaPtr;
									}
};
