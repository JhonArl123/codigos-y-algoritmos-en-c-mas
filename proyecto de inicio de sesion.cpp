#include <iostream>
#include<string>
using namespace std;

int main()
{
	
	
    string frase_original = "KDSAL";
    
    
    cout<<"Verifica que eres humano. Escribe el texto que se muestra a continuación:"<<endl;
    cout<<"                              "<<frase_original<<endl;
   //Escriba su código aquí
   
   string frase_ingresar;
  
  
  string usuario="estudiante_informatica";
  int contrasena = 123456789;
  
  
  string user;
  int password;
   
 do{
 	
   cout<<"ingrese la frase:"<<endl;
   cin>>frase_ingresar;
   
   
   if(frase_ingresar==frase_original){
   	cout<<"eres humano"<<endl;
   	cout<<"BIENVENIDO"<<endl<<endl;
   	

do{

   	cout<<"ingrese tu User"<<endl;
   	cin>>user;
   	
   	cout<<"ingrese el password"<<endl;
   	cin>>password;
   	
   	
   	//datos a validar
   	if( user==usuario && password ==contrasena){
   		cout<<"BIENVENIDO"<<endl<<endl;
   		
   		cout<<"MENU DE OPCIONES"<<endl;
   		cout<<"1. ver los cursos"<<endl;
   		cout<<"2. INGRESAR NOTAS Y VER PROMEDIO"<<endl;
   		
   		//variable para el switch
   		int select;
   		cin>>select;
   		
   		//variable para el caso 2 y el uso de while
   		int bimestre=1;
		float promedio;
		float nota_bim;
   	
	switch(select){
		case 1:
			cout<<"Programacion"<<endl;
			cout<<"Matematica"<<endl;
			cout<<"Redes"<<endl;
			break;
			
		case 2:
			while(bimestre<5){
			
			cout<<"ingrese las notas del bimestre"<<bimestre<<endl<<endl;
			cin>>nota_bim;
			promedio = (nota_bim+nota_bim+nota_bim+nota_bim)/4;
			bimestre++;
			
			cout<<"su promedio final es "<<promedio;
				
			}
		
		
		
	}   		
   		
   		
   	}
	   else{
	   	cout<<"tu usuario o contraseña son icorretos"<<endl;
	   	cout<<"vuelve a internarlo"<<endl<<endl;
	   }
   	
	}while(user!=usuario || password !=contrasena);
   	
   }
   else{
   	cout<<"no eres humano"<<endl;
   	cout<<"vuele a escribir la frase:"<<endl<<endl;
   }
   
   
   }while(frase_ingresar!=frase_original);
   
    return 0;
}
