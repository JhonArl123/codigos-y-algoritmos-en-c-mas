#include <iostream>
#include <string>
using namespace std;

int main()
{


 //variables para agregar las notas de los cursos
	float nmate;
	float ningles;
	float nespanol;
	float nfisica;
	float promedio;
	
	//variables para datos del estudiante
string Nombre; 
string Apellido;
int Edad;
string Grado;

et1:
cout<<"EMPRESA DATASYS "<<endl;
cout<<"PROGRAMA PARA CALCULAR EL PROMEDIO DE UN ESTUDIANTE"<<endl<<endl;


//Menu de opciones
cout<<"MENU DE OPCIONES"<<endl;
cout<<"1. Ingresar estudiante"<<endl;
cout<<"2. Ingresar Notas"<<endl;
cout<<"3. Mostrar Promedio"<<endl;
cout<<"4. Desarrolladres"<<endl;
cout<<"5. Salir"<<endl<<endl;

cout<<"Seleccione la accion que desea realizar..."<<endl<<endl<<endl;



//opciones de switch
int select;
cin>>select;
 
switch (select)
{
	case 1:
		cout<<"INGRESAR ESTUDIANTE"<<endl<<endl;
		cout<<"Nombre del estudiante"<<endl;
			cin>>Nombre;
		cout<<"Apellido del estudiante"<<endl;
			cin>>Apellido;
		cout<<"Edad del estudiante"<<endl;
			cin>>Edad;
		cout<<"Grado Academico"<<endl;
			cin>>Grado;
		cout<<"El nombre del estudiante ha sido registrado correctamente...";
			cin.ignore();
				getchar();
				goto et1;
				break;
	

	case 2:
	
		cout<<"INGRESAR NOTAS"<<endl<<endl;
		cout<<"Ingresar notas de Matematica: "<<endl;
			cin>>nmate;
		cout<<"Ingresar nota de Ingles: "<<endl;
			cin>>ningles;
		cout<<"Ingresar notas de Idioma Español: "<<endl;
			cin>>nespanol;
		cout<<"Ingresar nota de Educacion Fisica: "<<endl;
			cin>>nfisica;
		cout<<"Las notas han sido registradas al sistema...";
			cin.ignore();
				getchar();
				goto et1;
				break; 
		
	case 3:
 	cout<<"MOSTRAR PROMEDIO: "<<endl<<endl; 
 		promedio = (nmate + ningles + nespanol + nfisica) / 4;
 		cout<<"su promedio es "<<promedio<<endl;
 	cout<<"+--------+----------+------+-------+----------+------------+----------------+---------------+----------+"<<endl;
 	cout<<"|Nombre  | Apellido | Edad | Grado | Nota Mate| Nota Ingles| Nota I.Espanol | Nota E.Fisica | Promedio | "<<endl;
 	cout<<"+--------|----------|------|-------|----------|------------|----------------|---------------|----------+"<<endl<<endl<<endl;
 	
 	//imprimir los datos y las notas del estudiante
 	
 	cout<<"|" <<Nombre << "    | "
	 <<Apellido <<"     |" <<  Edad << " |  "<<Grado << "|      "<<nmate <<    " |     " <<ningles<<"    |       "<<nespanol <<      "        |       "<<nfisica<<        "    |  "<<promedio<<"    |"<<endl;
	 cout<<"+-------|----------|-------|-------|---------|------------|----------------|---------------|-----------+"<<endl;
 		cin.ignore();
 			getchar();
 			goto et1;
			break;
	
	case 4: 
	cout<<" DESARROLLADOR"<<endl;
	cout<<"Juan Alfonso Ralios Larios"<<endl;
	cout<<"Tarea punto extra"<<endl;
		cin.ignore();
			getchar();
			goto et1;
			break;
	
	case 5:
		cout<<"Salir del programa"<<endl;
		break;
}


    return 0;
}



