#include <iostream>

using namespace std;

int main() {
	cout << "Hello World!" << endl;
  char nombre[30];
  cout << "Nombre: "; cin.getline(nombre, sizeof(nombre), '\n');
  cout << "Hola " << nombre;
	getchar();
	return 0;
}
