#include <iostream>

using namespace std;

int main() {
  char nombre[30];
  unsigned int edad;

	cout << "Hello World!" << endl;
  cout << "Nombre: "; cin.getline(nombre, sizeof(nombre), '\n');
  cout << "Hola " << nombre << "!!\n";
  cout << "Edad: "; cin >> edad;
  cout << "Vas a cumplir: " << edad + 1 << " anios!!";
	getchar();
	return 0;
}
