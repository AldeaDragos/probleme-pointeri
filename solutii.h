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



void sol8() {

	int v[10] = { 8, 2, 9, 4, 5 };

	int dim = 5;

	minMaxVector(v, dim);
}


void sol9() {

	int v[10] = { 8, 7, 9,2, 5 };

	int dim = 5;

	minMaxVectorIndice(v, dim);
}

void sol10() {

	int v[10] = { 7, 7, 9, 2, 4 };

	int dim = 5;

	elemEgalCuDifMaxMin(v, dim);
}

void sol11() {

	int v[10] = { 7, 9 ,6, 2, 8 };

	int dim = 5;

	elemCuprinseMaxMin(v, dim);

}

void sol12() {

	int v[10] = { 7, 6, 1, 2, 8 };

	int dim = 5;

	sumaElemPare(v, dim);

}

void sol13() {

	int v[10] = { 5, 0, 2, 1, 4 };

	int dim = 5;

	nrMaiMariCaMA(v, dim);

}

void sol14() {

	int v[10] = { 7,4,9,6,2 };

	int dim = 5;

	inlocNrPrime(v, dim);

	afisareVector(v, dim);

}


void sol15() {

	int v[10] = { 50, 18, 15, 28, 35, 40 };

	int dim = 6;

	perechiNrPrimEgalDepIntreEle(v, dim);


}



void sol16() {

	int v[10] = { 51, 18, 15, 28, 77, 121 };

	int dim = 6;

	perechiNrPrimIntreEle(v, dim);


}

void sol17() {

	int v[10] = { 13, 3, 8, 7, 9, 25 };

	int dim = 6;

	nrPerechiNrDiv(v, dim);


}

void sol18() {
	
	int v[10] = { 10,3,6,17,9,11 };

	int dim = 6;

	perechiElemAcelasiNrDiv(v, dim);

}

void sol19() {

	int v[10] = { 51,842,15,28,77,132 };

	int dim = 6;

	voidPerechiSumaCifreEgale(v, dim);

}


void sol20() {

	int v[10] = { 50, 1815, 15, 289, 35, 40 };

	int dim = 6;

	construireVecResImp(v, dim);

}


void sol21() {

	int v[10] = { 50, 5, 15, 29, 35, 40 };

	int dim = 6;

	construireVectorSumaCuEx(v, dim);

}

void sol22() {

	int v[10] = { 50, 5, 15, 29, 13, 40 };

	int dim = 6;

	construireVectorRast(v, dim);

}

void sol23() {

	int v[10] = { 50, 5, 15, 29, 13, 40 };

	int dim = 6;

	construireVectorImp(v, dim);

}

void sol24() {

	int v[10] = { 50, 64, 15, 28, 35, 75 };

	int dim = 6;

	primeCuUltimu(v, dim);

}

// FISA

void sol25() {

	int v[10] = { 53,93,32,7,13,19 };

	int dim = 6;

	numerePrimVector(v, dim);

}

void sol26() {

	int v[10] = { 53,83,23,7,13,38 };

	int dim = 6;
	
	cifraMinMaxVector(v, dim);

}


void sol27() {

	int v[10] = { 523,813,243,725147,3233,3638 };

	int dim = 6;

	rastNrEgaleCifre(v, dim);

}

void sol28() {

	int v[10] = {6,10,14,15,21 };

	int dim = 6;

	int k;
	cin >> k;
	cout << "K= " << endl;

	nrDivPropriiKNr(v, dim, k);

}