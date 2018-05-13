#ifndef RADIO_H
#define RADIO_H
#include <iostream>
#include <string.h>
using namespace std;
class Radio
{
	char n[50];
	
	public:
		
		int anio;
		Radio(char n[],int anio);
		Radio();
		~Radio();
		void carga();
		void mostrar();
		void setN(char n[]);
		char *getN();
		
		
		
	protected:
};

#endif
