#include <iostream>
using namespace std;
main (){
	/*int i=0;
	while(i<5){
		cout<<i<<endl;
		i++;
	}*/
	
/*	int ii = 0;
	do{
		ii++;
		cout<<ii<<endl;
	}while (i<5);*/

	char respuesta='s';
	
	while (respuesta='s' || respuesta=='S'){
		cout<<"Desea Ingresar Otro Valor (s/n) ";
		cin>>respuesta;	
	}
	
	
	system("pause");
}
