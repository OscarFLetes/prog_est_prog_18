/*Autor Oscar Eduardo Fletes Ixta, Realizado: 24/2/22
	prpgrama pide la cantidad de numeros enteros a leer y despues que introducen todas los numeros
		se calculo lo siguiente;
			cuantos numeros pares introdujo
			el numero mayor
			el numero menor
	Valiar que los numeros sean positivos
	
	Programa en lenguaje c que muestra el uso de scanf, el uso del ciclo for, uso del ciclo do-while y condiciones
	Autor: Oscar Eduardo Fletes Ixta
	Escuela: UVM Campus Lomas Verdes
	Materia : Programcion Estructurada
	CICLO: 01/2022

	Programa en lenguaje c que muestra el uso de:
		-Declaracion de variables 
		-Variables del tipo int
		-scanf
		-Operaciones aritmeticas 
		-Uso del ciclo for
		-Uso del ciclo do-while
		-Uso de condicones
		-printf para monstrar los valroes de las variables

	Objetivo:
	Mostrar el uso de variables enteras, como declararlas, pedirlas por teclado, usar el ciclo for, 
	usar el ciclo do-while dentro del for, usar condiciones dentro del for, 
	realizar operaciones aritmeticas e imprimirla.

	Breve descripcion:
	El programa pide como entrada 1 variable de tipo int (cantidad de numeros),
	El programa pide la cantidad de numeros enteros a leer y despues que se introduzcan todos los numeros, 
	se cuenta los numeros pares, el numero mayor y menor, se valida que los numeros sean positivos
*/
	
#include<stdio.h>//Cuerpo para lenguaje c

int main(){
	//Variables
	int numeros,dato, pares=0, mayor,menor;//variable numero entero
	//Introduccir cuantos numeros se van a leer
	//Entrada
	printf("Introduce la cantidad de numeros a leer: ");//imrpime mensaje
	scanf("%d",&numeros);//lee el numero insertado por el teclado
	//ciclo for
	//Proceso
	for(int i=1;i<=numeros;i++){
		//ciclo do while
		//Pedir el dato y validar que sea positivo
		do{
			printf("Introduce el numero %d: ",i);//imrpime mensaje
			scanf("%d",&dato);//lee el numero insertado por el teclado
			if(dato<=0){//Condicion, si dato es menor o igual que 0
				printf("Numero negativo, intenta nuevamente. \n");//imrpime mensaje
			}
		}while(dato<=0);//do-while termina al momento de introducir un numero negativo 
		//probar si es par
		if(dato%2==0){ //Condicion, si dato es par
			//%==modulo da el residuo de una division
			pares++;//contador
		}	
		if(i==1){ //Condicion, si i es igual a 1
			//el primer dato no tiene con quien compararse
			menor=dato;//declarar variables
			mayor=dato;//declarar variables 
		}else{ //Condicion, si no se cumple ninguna validacion anterior 
			//Los demas datos ya se comparan con los anteriores valores introducidos
			if(dato>mayor){//Condicion, si dato es mayor
				mayor=dato;//Declarar
			}
			if(dato<menor){//Condicion si dato es menor 
				menor=dato;//Declarar 
			}
		}
	}
	//Salida
	printf("Las cantidad de nuemros pares es: %d\n",pares);//imrpime la salida de los pares	
	printf("EL numero mayor es: %d\n",mayor);//imrpime la salida de los numeros mayores 
	printf("EL numero menor es: %d\n",menor);//imrpime la salida de los nunmeros menores 
	return 0;
}
