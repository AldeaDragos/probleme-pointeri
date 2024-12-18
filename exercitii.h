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

	int pozitieElemMin = -1;

	for (int* p = v; p != v + dim; p++) {

		int pozitie = p - v;

		if (*p < elemMin) {
			elemMin = *p;
			pozitieElemMin = pozitie;
		}
	}
	return pozitieElemMin;

}

int elemMax(int* v, int dim) {

	int elemMax = -1;

	int pozitieElemMax = -1;


	for (int* p = v; p != v + dim; p++) {

		int pozitie = p - v;

		if (*p > elemMax) {
			elemMax = *p;
			pozitieElemMax = pozitie;
		}
	}
	return pozitieElemMax;

}

void elemCuprinseMaxMin(int* v, int dim) {

	int max = elemMax(v, dim);
	int min = elemMin(v, dim);

	for (int* p = v; p <= dim + v; p++) {

		cout << *p << " ";
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

// EXERCITII

//1

int sumaDiv(int n) {

	int suma = 0;

	for (int d = 1; d <= n; d++) {

		if (n % d == 0) {

			suma += d;

		}

	}
	return suma;

}

void perechiElemAcelasiNrDiv(int* v, int dim) {

	int ct = 0;

	for (int* p = v; p != dim + v; p++) {

		for (int* k = p + 1; k != dim + v; k++) {

			if (sumaDiv(*p) == sumaDiv(*k)) {

				ct++;

			}

		}
	}
	cout << ct << endl;
}

//2

//Numarare5

int sumaCifrelor(int n) {

	int suma = 0;

	while (n != 0) {

		int cifra = n % 10;
		suma += cifra;
		n = n / 10;

	}
	return suma;
}

void voidPerechiSumaCifreEgale(int* v, int dim) {

	int ct = 0;

	for (int* p = v; p != dim + v; p++) {

		for (int* k = p+1; k != dim + v; k++) {

			if (sumaCifrelor(*p) == sumaCifrelor(*k)) {

				ct++;

			}

		}

	}
	cout << ct << endl;
}

void construireVecResImp(int* v, int dim) {

	int rest = 0;

	int y[10] = {};
	int ct = 0;

	for (int* p = v; p != dim + v; p++) {

		rest = *p % sumaCifrelor(*p);

		y[ct++] = rest;
	}

	for (int* q = y; q != ct + y; q++) {
		cout << *q << " ";
	}

}

//Constr1

void construireVectorSumaCuEx(int* v, int dim) {

	int suma = 0;

	int y[10] = {};
	int ct = 0;

	for (int* p = v; p != dim + v; p++) {

		suma += *p;
	}

	for (int i = 0; i < dim; i++) {
		y[i] = suma - *(v + i);

	}

	for (int* q = y; q != dim + y; q++) {
		cout << *q << " ";
	}
}

// Constr2

int inversNr(int n) {

	int numarNou = 0;

	while (n != 0) {

		int cifra = n % 10;
		numarNou = numarNou * 10 + cifra;
		n = n / 10;

	}
	return numarNou;
}

void construireVectorRast(int* v, int dim) {

	int y[10];
	
	int ct = 0;

	for (int* p = dim+v-1; p >=v; p--) {

		if (prim(*p)) {

			y[ct++] = *p;

		}
	}

	for (int* q = y; q != ct + y; q++) {
		cout << *q << " ";
	}

}

void construireVectorImp(int* v, int dim) {

	int ct = 0;

	int y[10];

	for (int* p = dim + v - 1; p >= v; p--) {

		if (*p % 2 != 0) {
			y[ct++] = *p;
		}

	}

	for (int* q = y; q != ct+y; q++) {

		cout << *q << " ";

	}

}

void primeCuUltimu(int* v, int dim) {

	int ct = 0;

	for (int* p = v; p != dim + v - 1; p++) {

		if (cmmdc(*p, *(dim + v - 1)) == 1) {

			ct++;

		}

	}

	cout << ct << endl;
}

// PROBLEME FISA 

// I,1,a

void numerePrimVector(int* v, int dim) {

	int ct = 0;

	for (int* p = v; p != dim + v; p++) {

		if (prim(*p)) {
			ct++;
		}

	}
	cout << ct << endl;
}

// I,1,b

int cifraMin(int n) {

	int min = 9;

	while (n != 0) {
		int cifra = n % 10;
		if (cifra < min) {
			min = cifra;
		}
		n = n / 10;
	}
	return min;
}

int cifraMax(int n) {

	int max = -1;

	while (n != 0) {
		int cifra = n % 10;
		if (cifra > max) {
			max = cifra;
		}
		n = n / 10;
	}
	return max;
}

void cifraMinMaxVector(int* v, int dim) {

	int min = 9;
	int max = -1;

	for (int* p = v; p != dim + v; p++) {

		if (cifraMax(*p) > max) {
			max = cifraMax(*p);
		}
		if (cifraMin(*p) < min) {
			min = cifraMin(*p);
		}
	}

	cout << "Cea mai mica cifra din vector este " << min << endl;
	cout << "Cea mai mare cifra din vector este " << max << endl;
}

// I,1,c

int primaCifraEgalUc(int n) {

	int uc = n % 10;
	
	int pc = inversNr(n) % 10;

	if (uc != pc) {
		return false;
	}
	return true;
}

void rastNrEgaleCifre(int* v, int dim) {

	for (int* p = v; p != dim + v; p++) {
		if (primaCifraEgalUc(*p)) {

			cout << inversNr(*p) << " ";

		}
	}

}

// I,1,d

int nrDivProprii(int n) {

	int ct = 0;

	for (int i = 2; i < n; i++) {

		if (n % i == 0) {
			ct++;
		}

	}
	return ct;
}

void nrDivPropriiKNr(int* v, int dim,int k) {

	for (int* p = v; p != dim + v; p++) {

		while (nrDivProprii(*p) == k) {
			cout << "Toate elementele au k divizori proprii " << endl;
		}

	}

}