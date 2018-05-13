#include "Radio.h"

Radio::Radio()
{
	strcpy(n,"Rania");
	anio=2012;
	
}

	Radio::Radio(char n[],int anio){
		strcpy(this->n,n);
		this->anio=anio;
		
	}
	
	
	void Radio::carga(){
		cout<<endl<<"MArca del radio: "<<endl;
		cin.sync();
		cin.getline(n,50);
		cout<<endl<<"Año del radio: "<<endl;
		cin>>anio;
		
	}
	
	void Radio::mostrar(){
		cout<<endl<<"Radio: "<<this->getN()<<endl;
		cout<<endl<<"Anio: "<<anio<<endl;
		
	}
	
	void Radio::setN(char n[]){
		strcpy(this->n,n);
	}
	
	char *Radio::getN(){
		return n;
	}
	

Radio::~Radio()
{
}
