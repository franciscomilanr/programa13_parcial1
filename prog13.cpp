/* 
Autor: Franciscomilan
Realizado: 17/02/2022
Escuela: Universidad uvm
Materia: Programacion estructurada
Profesor: Armando Cruz
Ciclo: 01/2022
Descripcion:Programa 13 en C que pide cualquier cantidad de numero y calcula su suma 
El programa terminara de leer numeros cuando se introduzca un 0 para la materia de programacion estructurada
*/

//Principal
int main() {
	//Variables
	float numero=1, suma=0;
	int i=1;
	//While
	while (i!=0){
		printf(" Introduce un numero %d: ",i);
		scanf("%f",&numero);
		suma=suma+numero;
		//Contador		
		i++; 
	}
	//Salida
	printf("La suma es %.2f",suma);
	//Retorno
	return 0;
}