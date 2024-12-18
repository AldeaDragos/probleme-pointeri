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

// TEMA

void minMaxVector(int* v, int dim) {

	int elemMax = -1;
	int elemMin = 999;

	for (int* p = v; p != v + dim; p++) {

		if (*p > elemMax) {
			elemMax = *p;
		}

		else if (*p < elemMin) {
			elemMin = *p;
		}
	}
	cout << "Cel mai mic elem este " << elemMin << endl;
	cout << "Cel mai mare elem este " << elemMax << endl;
}

// 2

void minMaxVectorIndice(int* v, int dim) {

	int elemMax = -1;
	int elemMin = 999;

	int ctIndiceMin = 0;
	int ctIndiceMax = 0;

	for (int* p = v; p != v + dim; p++) {

		int indice = p - v;

		if (*p > elemMax) {
			elemMax = *p;
			ctIndiceMax = indice;
		}
		if (*p < elemMin) {
			elemMin = *p;
			ctIndiceMin =indice;
		}
	}
	cout << "Indicele celui mai mic elem este " << ctIndiceMin << " " << elemMin << endl;
	cout << "Indicele celui mai mare elem este " << ctIndiceMax << " " << elemMax << endl;

}

// 3

// Numarare6

void elemEgalCuDifMaxMin(int* v, int dim) {

	int elemMax = -1;
	int elemMin = 999;

	for (int* p = v; p != v + dim; p++) {

		if (*p > elemMax) {

			elemMax = *p;

		}
		if (*p < elemMin) {

			elemMin = *p;

		}
	}

	int diferenta = abs(elemMax - elemMin);

	int ct = 0;

	for (int* p = v; p != v + dim; p++) {

		if (*p == diferenta) {
			ct++;
		}
	}

	cout << ct << endl;
}

//4

int elemMin(int* v, int dim) {

	int elemMin = 999;

	for (int* p = v; p != v + dim; p++) {

		if (*p < elemMin) {
			elemMin = *p;
		}
	}
	return elemMin;

}

int elemMax(int* v, int dim) {

	int elemMax = -1;

	for (int* p = v; p != v + dim; p++) {

		if (*p > elemMax) {
			elemMax = *p;
		}
	}
	return elemMax;

}

void elemCuprinseMaxMin(int* v, int dim) {

	int max = elemMax(v, dim);
	int min = elemMin(v, dim);

	for (int i = max; i<= min; i++) {

		cout << i << " ";
	}

}

// 5

//Suma2

void sumaElemPare(int* v, int dim) {

	int elemParPrim = -1;
	int elemParUltim = -1;

	int suma = 0;

	for (int* p = v; p != v + dim; p++) {

		if (*p % 2 == 0) {
			elemParPrim = *p;
			break;
		}

	}

	for (int* p = v + dim-1; p >= v; p--) {

		if (*p % 2 == 0) {
			elemParUltim = *p;
			break;
		}

	}

	for (int i = elemParPrim; i <= elemParUltim; i++) {
		suma += i;
	}
	cout << suma << endl;
}

//6

//Numarare2

int sumaElemVec(int* v, int dim) {

	int suma = 0;

	for (int* p = v; p != v + dim; p++) {
		suma += *p;
	}
	return suma;
}

void nrMaiMariCaMA(int* v, int dim) {

	int ct = 0;

	int suma = sumaElemVec(v, dim);

	double ma = suma / dim;

	for (int* p = v; p != v + dim; p++) {

		if (*p > ma) {
			ct++;
		}

	}
	cout << ct << endl;
}

// 7

// Inlocuire5

int prim(int numar) {

	if (numar < 2) {
		return false;
	}

	for (int i = 2; i <= numar / 2; i++) {
		if (numar % i == 0) {
			return false;
		}
	}
	return true;
}

void inlocNrPrime(int* v, int dim) {

	for (int* p = v; p != v + dim; p++) {

		if (prim(*p)) {
			*p = 0;
		}
	}

}

// 8

// Numarare7

int cmmdc(int a,int b) {

	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

void perechiNrPrimEgalDepIntreEle(int* v, int dim) {

	int ct = 0;

	for (int* p = v; p != dim + v; p++) {

		for (int* k = p+1; k != dim + v; k++) {

			if (cmmdc(*p, *k) == 1) {

				ct++;

			}

		}
	}
	cout << ct << endl;
}

//9 

void perechiNrPrimIntreEle(int* v, int dim) {

	int ct = 0;

	for (int* p = v; p != dim + v; p++) {

		for (int* k = p + 1; k != dim + v; k++) {

			if (cmmdc(*p, *k) == 1) {

				ct++;

			}

		}
	}
	cout << ct << endl;
}

//10

int nrDiv(int n) {

	int ct = 0;

	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			ct++;
		}
	}
	return ct;
}

void nrPerechiNrDiv(int* v, int dim) {

	int ct = 0;

	for (int* p = v; p != dim + v; p++) {

		for (int* k = p + 1; k != dim + v; k++) {

			if (nrDiv(*p) == nrDiv(*k)) {

				ct++;

			}

		}

	}
	cout << ct << endl;
}