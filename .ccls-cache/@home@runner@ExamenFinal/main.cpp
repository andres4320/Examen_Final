#include<iostream>
using namespace std;

int ingresar(int n[5]);
int mostrar(int ingresar, int n[5]);

int ingresar (int n[5]) {
	int i, ingresados;
	for (i=1;i<=5;i++) {
		cout << "Ingresa un numero " << i << ": ";
		ingresados = n[i];
    cin >> n[i];
	}
}

int mostrar (int n[5]) {
  int i, mostrados;
  for (i=1;i<=5;i++) {
    mostrados = n [i];
		cout << n[i] << endl;
  }
}

int main() {
	int  ing, mos, n[5], i;

	ing = ingresar(n[i]);
	mos = mostrar(n[i]);
	cout << "Los numeros ingresado son: " << mos << endl;

	return 0;
}

