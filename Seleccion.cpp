#include <iostream>
using namespace std;
main (){
	/*
	int i=0;
	int contar=0;
	for (i=4;i<=8;i+=2){
		cout<<i<<endl;
		contar++;
		
	}
	cout<<"i Fuera: "<<i<<endl;
	cout<<"Cliclos: "<<contar<<endl;
	*/
	
	/*
	for (int i=0;i<10;i++){
		if (i==5){
			cout<<"if"<<endl;
			continue;
		}
		cout<<i<<endl;
	}
	cout<<"fuera del for"<<endl;
	*/
	
	/*
	int tam = 0;
	int datos [] = {10,40,100,250,5000};
	tam = sizeof(datos) / sizeof (datos[0]);
	
	for (int i=0; i<tam; i++){
		cout<<datos[i]<<endl;
	}
	*/
	
	int inicio = 0, fin = 0, res = 0;
	cout<<"Ingrese la Tabla Inicial"<<endl;
	cin>>inicio;

	cout<<"Ingrese la Tabla Final"<<endl;
	cin>>fin;
	
	for (int rango=inicio;rango<=fin;rango++){
		cout<<"tabla del "<<rango<<endl;
	
	for (int i=1; i<=10; i++){
		res = rango * i;
		cout<<rango<<" x "<<i<<" = "<<res<<endl;
	}
	}
	
	
	system("pause");
}
