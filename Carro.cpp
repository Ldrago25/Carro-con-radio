#include "Carro.h"

Carro::Carro()
{
	strcpy(nombre,"Chevrolet");
	strcpy(placa,"A44d");
	anios=2018;
	k=true;
}

	Carro::Carro(char nombre[],char placa[],bool k,int anios,char n[],int anio):Radio(n,anio){
		strcpy(this->nombre,nombre);
		strcpy(this->placa,placa);
		this->k=k;
		this->anios=anios;
		
		
	}
	
	void Carro::cargar(){
		
		cout<<endl<<"Marca del carro: "<<endl;
		cin.sync();
		cin.getline(nombre,50);
		cout<<endl<<"Placa: "<<endl;
		cin.sync();
		cin.getline(placa,50);
		cout<<endl<<"Anio: "<<endl;
		cin>>anios;
		cout<<endl<<"Tiene radio? "<<((k)? "Si": "No")<<endl;
		
		Radio::carga();	
	}
	
	void Carro::imprimir(){
		cout<<endl<<"MArca: "<<this->getM()<<endl;
		cout<<endl<<"Placa: "<<this->getA()<<endl;
		cout<<endl<<"Anio: "<<anios<<endl;
		Radio::mostrar();
		
		
	}
	void Carro::setM(char nombre[]){
		strcpy(this->nombre,nombre);
	}
	char *Carro::getM(){
		return nombre;
	}
	
	void Carro::setA(char placa[]){
		strcpy(this->placa,placa);
	}
	
	char *Carro::getA(){
		return placa;
	}
Carro::~Carro()
{
}
