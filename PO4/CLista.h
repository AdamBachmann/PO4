#pragma once
#include <vector>
#include "T3D.h"

using namespace std;
class CLista
{
public:
	T3D* first;

	CLista();
	CLista(const CLista &Lista);
	CLista(vector<T3D> &Wektor);
	//~CLista();
	void dodaj(double, double, double);
	void wstaw(double, double, double);
	void usun(int);
	void wyszukaj(double, double, double);
};

