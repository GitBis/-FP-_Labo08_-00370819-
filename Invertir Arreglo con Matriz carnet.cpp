#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int carnet[8] = { 0,0,3,7,0,8,1,9 };
int carnetInvertido[8];
int tablaMatriz[5][9];
int contar = 0;

void mostrar(int carnet[]) {

	cout << "\t\n" << endl;

	for (int i = 0; i <= 7; i++) {
		cout << carnet[i];
		carnetInvertido[i] = carnet[i];
	}
}

void invertir(int mostrar[]) {

	cout << "\t\n" << endl;

	for (int i = 7; i >= 0; i--) {


		cout << "" << carnetInvertido[i];
	}

	cout << "\t\n" << endl;
}


void Tabla(int invertir) {

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 9; j++) {

			if (i % 2 == 0) {
				tablaMatriz[i][j] = carnet[j];
			}

			else {
				tablaMatriz[i][j] = carnetInvertido[i];
			}

		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 7; j++) {

			tablaMatriz[4][j] = contar;
			contar++;
		}
		tablaMatriz[i][8] = contar;
		contar++;
	}

	for (int i = 0; i < 5; i++) {

		for (int j = 0; j < 9; j++) {

			cout << tablaMatriz[i][j] << "  |  ";

		}
		cout << " " << endl;
	}

}

int main() {

	cout << "\n\t\ARREGLOS\n" << endl;
	mostrar(carnet);
	invertir(carnetInvertido);
	cout << "\n\t\TABLA DE MATRIZ\n" << endl;
	Tabla(tablaMatriz[5][9]);



	return 0;
}


