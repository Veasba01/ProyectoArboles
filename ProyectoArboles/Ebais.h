#include <sstream>
using namespace std;
class Ebais{
private:
	string nombre;
	string director;
	int numUsuarios, id;
	string especialidades;
public:
	Ebais(){
		this->nombre="";
		this->director="";
		this->numUsuarios=0;
		this->id=0;
		this->especialidades="";
	}
	Ebais(string nombre, string director, int numUsuarios, int id, string especialidades){
		this->nombre=nombre;
		this->director=director;
		this->numUsuarios=numUsuarios;
		this->id=id;
		this->especialidades=especialidades;
	}
	void setNombre(string nombre){
	this->nombre=nombre;
	}
	string getNombre(){
		return this->nombre;
	}	
	
	void setDirector(string director){
		this->director=director;
	}
		string getDirector(){
			return this->director;
		}
	void setNumUsuarios(int numUsuarios){
		this->numUsuarios=numUsuarios;
	}
	int getNumUsuarios(){
		return this->numUsuarios;
	}
	void setId(int id){
		this->id=id;
	}
	int getId(){
		return this->id;
	}
	void setEspecialidades(string especialidades){
		this->especialidades=especialidades;
	}
	string getEspecialidades(){
		return this->especialidades;
	}	
	string toString(){
		stringstream out;
		out
			<<"======================"<<endl
			<<"Nombre del Ebais: "<<nombre<<endl
			<<"Director del Ebais: "<<director<<endl
			<<"Numero de Usuario: "<<numUsuarios<<endl
			<<"Especialidades: "<<especialidades<<endl
			<<"======================"<<endl;
		return out.str();
	}	
};
