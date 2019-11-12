#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int carnet[8] = {0,0,3,7,0,8,1,9};
int carnetInvertido[8];

void mostrar(int carnet[]) {

	cout << "\t\n" << endl;

	for (int i = 0; i <= 7; i++) {
		cout<<carnet[i];
		carnetInvertido[i] = carnet[i];
	}
}

void invertir(int mostrar[]) {

	cout << "\t\n"<<endl;

	for (int i = 7; i >= 0; i--) {


		cout << "" << carnetInvertido[i];
	}

	cout << "\t\n" << endl;
}
int main() {

	mostrar(carnet);
	invertir(carnetInvertido);


	//	cout << "Ingrese su carnet" << endl;

	//	for (int i = 0; i <= 2; i++) {
	//		cin >> carnet[i];
	//		carnetInvertido[i]=carnet[i];
	//	}

	//	int contador = 1;
	//	for (int i = 2; i >= 0; i--) {

	//	cout << " " << carnetInvertido[i];
	//	}


	return 0;
}