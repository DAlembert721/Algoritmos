#include "Fisher_Yate.h"
#include <time.h>
#include "Burbuja.h"
#include "Seleccion.h"
#include "Insertion.h"
int main() {

	srand(time(NULL));
	vector<int> array = {5,1,8,2,9,6};
	Fisher<int>* fish = new Fisher<int>(array);
	fish->mostrar();
	fish->Ordenar();
	fish->mostrar();
	Burbuja<int>* buble = new Burbuja<int>(array);
	buble->Ordenar();
	buble->mostrar();
	Seleccion<int>* selection = new Seleccion<int>(array);
	selection->Ordenar();
	selection->mostrar();
	Insertion<int>* insercion = new Insertion<int>(array);
	selection->Ordenar();
	selection->mostrar();
	return 0;
}