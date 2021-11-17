#ifndef NODOHOSPITAL_H
#define NODOHOSPITAL_H
class NodoHospital{
public:
	NodoHospital *izquierdaPtr;
	Hospital hospital;
	NodoHospital *derechaPtr;
public:
	NodoHospital(){
		this->izquierdaPtr=NULL;
		this->derechaPtr=NULL;
	}
	NodoHospital(Hospital hospital){
		this->izquierdaPtr=NULL;
		this->hospital=hospital;
		this->derechaPtr=NULL;
	}
	void setIzquierdaPtr(NodoHospital *nodoHospital){
		this->izquierdaPtr=nodoHospital;
	}
	NodoHospital* getIzquierdaPtr(){
		return this->izquierdaPtr;
	}
	void setHospital(Hospital hospital){
		this->hospital=hospital;
	}
	Hospital getHospital(){
		return this->hospital;
	}
	void setDerechaPtr(NodoHospital *nodoHospital){
		this->derechaPtr=nodoHospital;
	}
	NodoHospital* getDerechaPtr(){
	return this->derechaPtr;
	}
};
#endif
