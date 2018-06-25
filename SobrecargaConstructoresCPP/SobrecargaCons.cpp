#include<iostream>
#include<stdlib.h>
using namespace std;

class Fecha{
	private:	//Atributos
		int dia,mes,anio;
	public:		//Métodos
		Fecha(int,int,int); //Constructor1
		Fecha(long); //Constructor2
		void mostrarFecha();
};

//Constructor1
Fecha::Fecha(int _dia,int _mes, int _anio){
	anio = _anio;
	mes = _mes;
	dia = _dia;
}

//Constructor2
Fecha::Fecha(long fecha){
	anio = int(fecha/10000);	//Extrayendo el anio
	mes = int((fecha-anio*10000)/100);	//Extrayendo el mes
	dia = int(fecha-anio*10000-mes*100); //Extrayendo el día
}


void Fecha::mostrarFecha(){
	cout<<"La fecha es: "<<dia<<"/"<<mes<<"/"<<anio<<endl;
}

int main(){
	
	Fecha hoy(9,1,2017);
	hoy.mostrarFecha();
	
	Fecha ayer(20170107);
	ayer.mostrarFecha();
	system("pause");
	return 0;
}
