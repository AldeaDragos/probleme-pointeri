#include "exercitii.h"

void sol1() {

	int v[10] = { 4,2,-1,6,8,2 };
	
	int dim = 6;

	afisareVector(v, dim);

}

void sol2() {

	int v[10] = { 15, 245, 28, 33 ,11 };

	int dim = 5;

	cout << valoareAbsolutaDifParImp(v, dim);

}

void sol3() {

	int v[10] = { 7, 4, 9, 6, 2 };

	int dim = 5;

	multipluUltimulElement(v, dim);
}

void sol4() {

	int v[10] = { 7, 4, 9, 6, 2 };

	int dim = 5;

	inlocuireUltimulElement(v, dim);

	afisareVector(v, dim);
}


void sol5() {

	int v[10] = { 7, 4, 9, 6, 2 };

	int dim = 5;

	inlocuirePrimulUltimulElement(v, dim);

	afisareVector(v, dim);
}

void sol6() {

	int v[10] = { 7, 9, 2, 6, 8 };

	int dim = 5;

	afisareIndiciPariSiImp(v, dim);
}


void sol7() {

	int v[10] = { 2, 9, 1, 5, 8 };

	int dim = 5;

	afisareElementeOrdine(v, dim);
}
