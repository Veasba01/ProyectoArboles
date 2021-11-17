#include <sstream>
using namespace std;
class Ebais{
private:
	string nombre;
	string director;
	int numUsuarios;
	string especialidades;
public:
	Hospital(){
		this->nombre="";
		this->director="";
		this->numUsuarios=0;
		this->especialidades="";
	}
	Hospital(string provincia, string director, int numUsuarios, string especialidades){
		this->nombre=nombre;
		this->director=director;
		this->numUsuarios=numUsuarios;
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
	void setEspecialidades(string especialidades){
		this->especialidades=especialidades;
	}
		string getEspecialidades(){
			return this->especialidades;
		}	
		
};
