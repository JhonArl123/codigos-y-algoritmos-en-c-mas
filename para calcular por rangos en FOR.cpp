
#include <iostream>
#include <string>

using namespace std;

int main()
{
//Estas variables serviran para que la suma de los rangos se guardan en ellas.
int rango1, rango2, rango3;

//el primer bucle de for es una delcaracion de de una variabe con un valor determinado
//En el segundo bulce se evalua si 100 es menor o igual a 100. si es asi se ejecuta
//en el siguiente bulce se increnta un valor al numero 100
for(int i = 100; i<=1000; i ++){
	
	//Esta condicion me sirve para verificar los numeros menoros que 500
	if (i<=500){
		//los numeros que son menores que 500 los imprime como "primer rango"
		cout<<i<<": "<<"Primer rango"<<endl<<endl;
		//aqui se guarda el el total de los numero del primer rango
		rango1++;
	}
	
	//Esta condicion evalula los numeros menores que 900 y mayores que 501
	else if ( i<=900 && i>=501 ){
		//los numeros de ese rango los imprime en consola como "segundo rango
		cout<<i<<": "<<"segundo rango"<<endl<<endl;
		//Aqui se guardan el conteo de los numeros de segundo rango
		rango2++;
	}
	
	//En esta condicion me dice que si los numeros que no cumplen las condiciones anteriorres
	//entocnes se imprimen en consola como "tercer rango"
	else{
		cout<<i<<": "<<"Tercer rango"<<endl<<endl;
		//Aqui se guardan el total de los numeros delrango 3
		rango3++;
	}
	
}

//Estas impresiones son la muestra de la suma por cada rango
cout<<"los numero en el rango 1 es de: "<<rango1<<endl;
cout<<"los numeros en el rango 2 es de: "<<rango2<<endl;
cout<<"Los numeros en el rango 3 es de: "<<rango3<<endl;



    return 0;
}

