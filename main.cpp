#include <iostream>
#include "Radio.h"
#include "Carro.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a;
	cout<<endl<<"Cuantas veces: "<<endl;
	cin>>a;
	
	Carro **r=new Carro *[a];
	
	
	for(int i=0; i<a; i++){
		r[i]=new Carro();
		r[i]->cargar();
		r[i]->imprimir();
		
	}
	
	return 0;
}
