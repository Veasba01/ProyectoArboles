#include <sstream>
using namespace std;
class Hospital{

private:
	int id;
	string provincia, nombreHosp;
public:
	Hospital(){
		this->id=0;
		this->provincia="";
		
	}
	Hospital(int id, string provincia){
		this->id=id;
		this->provincia=provincia;
	}
	void setId(int id){
		this->id=id;
	}
	int getId(){
		return this->id;
	}
	void setProvincia(string provincia){
		this->provincia=provincia;
	}
	string getProvincia(){
		return this->provincia;
	}
	void setNombreHosp(string nombreHosp){
		this->nombreHosp=nombreHosp;
	}
	string getNombreHosp(){
		return this->nombreHosp;
	}			
	string toString(){
		stringstream out;
		out
			<<"======================"<<endl
			<<"Id del Hospital: "<<id<<endl
			<<"Provincia del hospital: "<<provincia<<endl
			<<"Nombre del Hospital: "<<nombreHosp<<endl
			<<"======================"<<endl;
		return out.str();
	}
};
