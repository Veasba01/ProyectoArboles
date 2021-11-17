
class NodoEbais{
public:
	NodoEbais *izquierdaPtr;
	Ebais ebais;
	NodoEbais *derechaPtr;
public:
	NodoEbais(){
		this->izquierdaPtr=NULL;	
		this->derechaPtr=NULL;
	}
	NodoEbais(Ebais ebais){
		this->izquierdaPtr=NULL;
		this->ebais=ebais;
		this->derechaPtr=NULL;
	}
	void setIzquierdaPtr(NodoEbais *nodoEbais){
		this->izquierdaPtr=nodoEbais;
	}
	NodoEbais* getIzquierdaPtr(){
		return this->izquierdaPtr;
	}
	void setEbais(Ebais ebais){
		this->ebais=ebais;
	}
	Ebais getEbais(){
		return this->ebais;
	}
	void setDerechaPtr(NodoEbais *nodoEbais){
		this->derechaPtr=nodoEbais;
	}
	NodoEbais* getDerechaPtr(){
		return this->derechaPtr;
	}
};
