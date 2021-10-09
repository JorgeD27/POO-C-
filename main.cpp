// cambio para el repositorio remoto
#include "Cliente.cpp"
#include "Empleado.cpp"
#include <iostream>
using namespace std;
main(){
	string nit,cd_em,puesto,nombres,apellidos,direccion,c_fn;
	int telefono;
	cout<<"Ingrese el codigo empleado: ";
	cin>>cd_em;
	cout<<"Ingrese Nit: ";
	cin>>nit;
	cout<<"Ingrese Nombres: ";
	cin>>nombres;
	cout<<"Ingrese Apellidos: ";
	cin>>apellidos;
	cout<<"Ingrese el puesto empleado: ";
	cin>>puesto;
	cout<<"Ingrese Direccion: ";
	cin>>direccion;
	cout<<"Ingrese Telefono: ";
	cin>>telefono;
	cout<<"Ingrese fecha de nacimiento: ";
	cin>>c_fn;
	
	// instanciar un objeto
	Cliente obj = Cliente(nombres,apellidos,direccion,telefono,c_fn,nit);
	obj.agregar();

	
	Empleado obj_c = Empleado(nombres,apellidos,direccion,telefono,c_fn,cd_em,puesto);
	obj_c.agregar();




	// instanciar un objeto y utilizar get and set
	
/*	Cliente obj = Cliente();
	obj.setNit(nit);
	obj.setNombres(nombres);
	obj.setApellidos(apellidos);
	obj.setDireccion(direccion);
	obj.setTelefono(telefono);
	//obj.mostrar();
	cout<<"Nit: "<<obj.getNit()<<endl;
	cout<<"Nombres: "<<obj.getNombres()<<endl;
	cout<<"Apellidos: "<<obj.getApellidos()<<endl;
	cout<<"Direccion: "<<obj.getDireccion()<<endl;
	cout<<"Telefono: "<<obj.getTelefono()<<endl;
*/	
}
