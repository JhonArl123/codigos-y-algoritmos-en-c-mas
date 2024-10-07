#include <iostream>
#include <string>

using namespace std;

int main()
{
	

//Variables que trae el ejercicio
int num_tarjeta = 12345678;
int pin = 4321;

//variables para validar las varibales que trae el ejercicio
int tarjeta;
int pinpasword;

//variable a la cual se le descuenta o se les suma los movimimientos. Retirar o depositar
int saldo_inicial = 25000;

//variable que se utiliza para retirar
float retirar;
//variable que se utiliza para retirar
float depositar;

//esta varaible utilizo para que aparezca mi nombre en consola
string name = "Juan Alfonso Ralios Larios";

cout<<"                   BIENVENIDO"<<endl;
cout<<"al programa App CAJERO AUTOMATICO"<<endl;
cout<<"donde puedes consulatar saldo, retirar dinero, depositar dinero"<<endl;
cout<<"y ver el nombre del desarrollador de la App"<<endl<<endl<<endl;


cout<<"ingrese su numero de tarjeta:"<<endl;
cin>>tarjeta;                              //variable donde voy a guardar el num_tarjeta 12345678
cout<<"ingrese su numero de pin:"<<endl;
cin>>pinpasword;                           //variable donde voy a guardar el pin 4321


//validacion de las variables
if(tarjeta == num_tarjeta && pinpasword==pin){
	
//si se cumplen las condiciones de if, entonces aparece lo siguiente abajo. si no se cumple aparaece como codigos incorrectos en la opcion else
	cout<<"BIENVENIDO " <<name <<endl;
	cout<<"Su numero de tarjeta es "<<tarjeta<<  " su pin es  "<<pinpasword<<endl<<endl;
	
	 
//menu de opciones
menu:
cout<<"1. Consultar saldo"<<endl;
cout<<"2. retirar dinero"<<endl;
cout<<"3. depositar dinero"<<endl;
cout<<"4. desarrolladores"<<endl;
cout<<"5. salir"<<endl<<endl;

cout<<"ejecute la accion que desea realizar"<<endl<<endl;

//uso de switch para que al dar ENTER a un numero se dirige al numero seleccionado
int select;
cin>>select;



switch(select){
	case 1:
		cout<<"consultar saldos"<<endl<<endl;
		cout<<"Su saldo inicial es: Q "<<saldo_inicial;
			cin.ignore();
			cin.ignore();
			getchar ();
			goto menu;
				break;
	
	case 2:
		cout<<"Retirar saldo"<<endl;
		cout<<"cuanto desea retirar:"<<endl;
		cin>>retirar;
		
		//ESta es una operacion para que el programa reste el retiro que se hace al saldo inicial que es de 1000
		saldo_inicial = saldo_inicial-retirar;
		
		cout<<"sado a retirar es de: Q"<<retirar<<endl;
		
		cout<<"su saldo actual es de: Q "<<saldo_inicial;
			cin.ignore();
			getchar ();
			goto menu;
				break;
	
	
	case 3:
		cout<<"Depositar dinero"<<endl;
		cout<<"cuanto desea depositar:"<<endl;
		cin>>depositar;
		
		//ESta es una opracion para que el programa sume el deposito que se hace al saldo inicial que es de 1000
		saldo_inicial = saldo_inicial + depositar;
		
		cout<<"el deposito es de: Q"<<depositar<<endl;
		cout<<"su saldo actual es de: Q "<<saldo_inicial<<endl;
			cin.ignore();
			getchar ();
			goto menu;
				break;
		
	case 4:
		cout<<"Desarrolladores"<<endl;
		cout<<"Jhon Arl"<<endl;
		cout<<"practicando_el ejercicio_numero2_que toco_en_el_parcial";
			cin.ignore();
			getchar ();
			goto menu;
				break;
	
	case 5:
		cout<<"salir del programa";
		break;
	
}

	
}

// Esto aparece si la condicion de if no se cumple 
else{
cout<<"los codigos que ingresastes son incorrectos";
}


   return 0;
}

