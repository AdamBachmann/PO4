#include "CLista.h"

CLista::CLista()
{
	first = 0;
}

CLista::CLista(const CLista& Lista)
{
	first = Lista.first;
}

CLista::CLista(vector<T3D>& Wektor)
{
	T3D* temp = new T3D;

	for (int i = 0; i < sizeof(Wektor); i++)
	{
		if (i == 0)
		{
			first = temp;
		}

		temp->x = Wektor[i].x;
		temp->y = Wektor[i].y;
		temp->z = Wektor[i].z;
		temp = temp->next;
	}
}

void CLista::dodaj(double a, double b, double c)
{
	T3D* nowa = new T3D;

	nowa->x = a;
	nowa->y = b;
	nowa->z = c;

	if (first == 0)
	{
		first = nowa;
	}
	else
	{
		T3D* temp = first;

		while (temp->next)
		{
			temp = temp->next;
		}

		temp->next = nowa;
		nowa->next = 0;
	}
}

void CLista::usun(int a)
{
	T3D* temp = first;
	int licznik = 1;
	if (a == 1)
	{
		first = temp->next;
		delete temp;
	}
	else if (a > 1)
	{
		while (temp)
		{
			if ((licznik + 1) == a)
				break;
			temp = temp->next;
			licznik++;
		}

		if (temp->next->next == 0)
		{
			delete temp->next;
			temp->next = 0;
		}
		else
		{
			T3D* usuwany = temp->next;
			temp->next = temp->next->next;
			delete usuwany;
		}
	}
}