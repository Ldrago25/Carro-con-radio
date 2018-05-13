#ifndef CARRO_H
#define CARRO_H

#include "Radio.h"

class Carro : public Radio
{
	char nombre[50];
	char placa[50];
	int anios;
	bool k;
	public:
		Carro(char nombre[],char placa[],bool k,int anios,char n[],int anio);
		Carro();
		~Carro();
		void cargar();
		void imprimir();
		void setM(char nombre[]);
		void setA(char placa[]);
		char *getM();
		char *getA();
		
	protected:
};

#endif
