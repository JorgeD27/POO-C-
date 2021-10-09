#include "Persona.cpp"
#include <iostream>
using namespace std;

class Cliente : Persona{
  // atributos
  private : string nit;
  // constructor
  public :
  Cliente(){
  }
  Cliente(string nom,string ape,string dir,int tel,string fn,string n) : Persona(nom,ape,dir,tel,fn){ 
  nit = n;
  }


// set (modificar los atributos de una clase)
void setNit(string n){nit = n;}
void setNombres(string nom){nombres = nom;}
void setApellidos(string ape){apellidos = ape;}
void setDireccion(string dir){direccion = dir;}
void setTelefono(int tel){telefono = tel;}
void setFn(string fn){c_fn = fn;}
// get (mostrar los atributros de una clase)
string getNit(){return nit;}
string getNombres(){return nombres;}
string getApellidos(){return apellidos;}
string getDireccion(){return direccion;}
int getTelefono(){return telefono;}
string getFn(){return c_fn;}
 // metodo
void agregar(){
	cout<<"______________________"<<endl;
	cout<<nit<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<","<<c_fn<<endl;
}

};
