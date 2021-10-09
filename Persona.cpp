#include <iostream>
using namespace std;
class Persona{
	// atributos
	protected : string nombres,apellidos,direccion, c_fn;
				int telefono;
	// costructor
	protected : 
		Persona(){
		}
		Persona(string nom,string ape,string dir,int tel, string fn){
			nombres = nom;
			apellidos = ape;
			direccion = dir;
			telefono = tel;
			c_fn=fn;
		}
	
	// metodos
	void agregar();
	
};
