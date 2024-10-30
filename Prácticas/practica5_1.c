#include <stdio.h>
#include <stdlib.h>

/**
 *
 *	Autor: Marcos y Diego
 */

int main(){

	// Definimos un array de 7 cadenas, cada una puede tener hasta 10 caracteres
	char dias[7][11] = { //Ponemos un char [11] porque la tilde de miércoles cuenta como un caracter más, entonces hay que sumarlo 
		"Lunes",
		"Martes",
		"Miércoles",
		"Jueves",
		"Viernes",
		"Sábado",
		"Domingo"
	};
	float temperatura,promedio,suma=0;
	//Imprimimos cada día de la semana

	printf("Ingrese la temperatura de cada día de la semana:");
	for (int i = 0; i < 7; i++) {
		printf("%s\n", dias[i]);
		scanf("%f", &temperatura);
		suma += temperatura; //Sumamos temperatura actual

	}
	promedio = suma / 7; //Calculamos el promedio
	printf("La temperatura promedio de la semana es: %2f\n", promedio); //Resultado

	int diaMaximo = 0, diaMinimo = 0; //Almacenamos los dias de temperatura maxima y minima
	float maximo, minimo;
	maximo = temperatura;

	minimo = temperatura;

	for (int i = 1; i < 7; i++) { //Hacemos una condicional para encontrar la temperatura maxima y minima y sus días correspondientes
		if (temperatura > maximo) {
			maximo = temperatura;
			diaMaximo = i;
		}
		if (temperatura < minimo) {
			minimo = temperatura;
			diaMinimo = i;
		}
	}
	printf("La temperatura maxima es: %2f\n, del día %d\n es: ", maximo, diaMaximo);
	printf("La temperatura minima es: %2f\n, del día %d\n es: ", minimo, diaMinimo);


	return EXIT_SUCCESS;
}
