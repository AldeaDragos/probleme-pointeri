#pragma once
#include <iostream>
#include <string.h>
using namespace std;

void afisareVector(int* v, int dim) {

	for (int *p=v; p!=v+dim; p++) {

		cout << *p << " ";

	}

	
}

int valoareAbsolutaDifParImp(int* v, int dim) {

	int ctImp = 0;
	int ctPare = 0;

	for (int* p = v; p != v + dim; p++) {
		
		if (*p % 2 == 0) {
			ctImp++;
		}
		else if (*p % 2 != 0) {
			ctPare++;
		}
	}

	return abs(ctPare - ctImp);

}

int ultimulElement(int* v, int dim) {

	int* p = v;

	int ultimulElement = *(p + dim - 1);

	return ultimulElement;
}

void multipluUltimulElement(int* v, int dim) {

	int ue = ultimulElement(v, dim);

	for (int* p = v; p != v + dim; p++) {

		if (*p % ue == 0) {

			cout << *p << " ";

		}

	}

}

void inlocuireUltimulElement(int* v, int dim) {


	for (int* p = v; p != v + dim; p++) {
		
		*(p + dim - 1) = 0;
	}

}

void inlocuirePrimulUltimulElement(int* v, int dim) {

	for (int* p = v; p != v + dim; p++) {

		*v = 0;

		*(p + dim - 1) = 0;

	}

}

void afisareIndiciPariSiImp(int* v, int dim) {

	int ct = 0;

	for (int* p = v; p != v + dim; p++) {

		if (ct % 2 == 0) {
			cout << *p << " ";
		}
		ct++;
	}

	cout << endl;

	ct = 0;

	for (int* p = v; p != v + dim; p++) {
		
		if (ct % 2 != 0) {
			cout << *p << " ";
		}
		ct++;
	}
	cout << endl;
}

//Se citește un vector cu n elemente, numere naturale. Să se afișeze elementele vectorului în următoarea
//ordine: primul, ultimul, al doilea, penultimul, etc.

void afisareElementeOrdine(int* v, int dim) {

	int i = 0;

	while (i <= dim / 2) {

		cout << *(v + i) << " ";

		if (i != dim - 1 - i) {
			cout << *(v + dim - 1 - i) << " ";
		}
		i++;
	}
}
