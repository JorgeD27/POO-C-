#include "Persona.cpp"
#include <iostream>
using namespace std;
	
class Empleado : Persona{
  // atributos
  private : string cd_em, puesto;
  // constructor
  public :
  Empleado(){
  }
  Empleado(string nom,string ape,string dir,int tel,string fn,string cd, string pues) : Persona(nom,ape,dir,tel,fn){ 
   cd_em= cd;
   puesto=pues;
  }


// set (modificar los atributos de una clase)
void setCodigo(string cd){cd_em = cd;}
void setPuesto(string pues){puesto = pues;}
void setNombres(string nom){nombres = nom;}
void setApellidos(string ape){apellidos = ape;}
void setDireccion(string dir){direccion = dir;}
void setTelefono(int tel){telefono = tel;}
void setFn(string fn){c_fn = fn;}
// get (mostrar los atributros de una clase)
string getCodigo(){return cd_em;}
string getPuesto(){return puesto;}
string getNombres(){return nombres;}
string getApellidos(){return apellidos;}
string getDireccion(){return direccion;}
int getTelefono(){return telefono;}
string getFn(){return c_fn;}
 // metodo
void agregar(){
	cout<<"______________________"<<endl;
	cout<<cd_em<<","<<puesto<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<","<<c_fn<<endl;
}

};
