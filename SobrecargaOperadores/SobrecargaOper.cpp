#include<iostream>
#include<stdlib.h>

using namespace std;

class Personas
{
	private:
		//Contador de personas
		static int iPersonasContador;
		
		//Datos Generales de la Persona
		string sNombre;
		string sApellido;
	
	//Miembros Publicos
	public:
		
		//Constructor
		Personas(string sNombre, string sApellido)
		{
			//Coloca los valores por default
			this->sNombre=sNombre;
			this->sApellido=sApellido;
			
			//Incrementa el contador de personas
			this->iPersonasContador++;
		}
		
		//Obteniendo el nombre y apellido
		string getNombre()
		{
			return this->sNombre;	//Retorna el nombre
		}
		string getApellido()
		{
			return this->sApellido;	//Retorna el apellido
		}

		//Estableciendo el nombre y apellido
		void setNombre(string sNombre)
		{
			this->sNombre = sNombre;
		}
		void setApellido(string sApellido)
		{
			this->sApellido = sApellido;
		}

		//Método estático inicializa el contador
		static void setContadorReset()
		{
			cout<<"Inicializando contador de personas ..."<<endl<<endl;
			iPersonasContador=0;
			//this->iPersonasContador=0;
		}
		//Método estático obtiene el contador
		static int getContadorPersonas()
		{
			return iPersonasContador;
		}

		//Sobrecargando el operador +
		Personas operator + (const Personas xPersona)
		{
			//Variable de tipo persona para auxiliar
			Personas PersonAux = xPersona;
			Personas xPersonaAux("NombreNull","ApellidoNull");

			//Suma el nombre de la Primera persona al pa
			xPersonaAux.setNombre(this->getNombre()+"."+PersonAux.getNombre());
			xPersonaAux.setApellido(this->getApellido()+"."+PersonAux.getApellido());
			
			//Retorna el Resultado
			return xPersonaAux;
		}
		
};

//Inicializa el contador
int Personas::iPersonasContador=0;


int main ()
{
	//Creando objetos personas
	Personas xPersona1("Bruno","Godinez");
	Personas xPersona2("Fernando","Calva");
	Personas xPersona3("Ivan","Santiago");
	
	//Utilizando el operador sobrecargado
	xPersona3 = xPersona1+xPersona2;
	
	//Mostrando resultados en pantalla
	cout<<"Nombre:   \t"<<xPersona3.getNombre()<<endl;
	cout<<"Apellido: \t"<<xPersona3.getApellido()<<endl;
	cout<<"Contador: \t"<<xPersona3.getContadorPersonas()<<endl<<endl;
	
	system("pause");
	return 0;
}
