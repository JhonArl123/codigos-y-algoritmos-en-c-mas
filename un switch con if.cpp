#include <iostream>
#include <string>
#include <vector>
  
using namespace std;

int main()
{
	int number;
	
	do{
	cout<<"MENU DE OPCIONES"<<endl;
	cout<<"1. cantar"<<endl;
	cout<<"2. bailar"<<endl;
	cout<<"3. Llamar la funcion"<<endl<<endl;
	cout<<"elige una opcion..."<<endl;
		cin>>number;
		
	if (number ==1){
		cout<<"cantar"<<endl<<endl;
		cout<<"cual cancion quieres cantar"<<endl;
		cin.ignore();
		getchar();

	}
	if (number==2){
		cout<<"bailar"<<endl;
		cout<<"con quien vas a bailar"<<endl;
		cin.ignore();
		getchar();
		
	}
	if (number==3){
		cout<<"llamar mi funcion"<<endl;
		cin.ignore();
		getchar();
	
	}
	if(number==4){
		cout<<"opcion invalida"<<endl;
		cin.ignore();
		getchar();	
	}
		
	}while(number!=4);
	

    return 0;
}


