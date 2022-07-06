#include <iostream>
#include "CLista.h"
#include "T3D.h"

using namespace std;

//struct uint_t
//{
//	int a;
//	int b;
//};

int main()
{	
	CLista List;
	T3D forvek;
	vector<T3D> vek;
	for(int i = 0; i < 3; i++)
	{
		forvek.x = i;
		forvek.y = i;
		forvek.z = i;
		vek.push_back(forvek);

		List.dodaj(i, i, i);
	}

	cout << List.first->x << "\t" << List.first->y << "\t" << List.first->z << endl;
	cout << List.first->next->x << "\t" << List.first->next->y << "\t" << List.first->next->z << endl;
	cout << List.first->next->next->x << "\t" << List.first->next->next->y << "\t" << List.first->next->next->z << endl;

	//CLista Druga(List);
	//cout << Druga.first->x << "\t" <<				Druga.first->y << "\t" <<				Druga.first->z << endl;
	//cout << Druga.first->next->x << "\t" <<			Druga.first->next->y << "\t" <<			Druga.first->next->z << endl;
	//cout << Druga.first->next->next->x << "\t" <<	Druga.first->next->next->y << "\t" <<	Druga.first->next->next->z << endl;

	CLista Trzecia(vek);
	cout << Trzecia.first->x << "\t" <<				Trzecia.first->y << "\t" <<				Trzecia.first->z << endl;
	cout << Trzecia.first->next->x << "\t" <<		Trzecia.first->next->y << "\t" <<		Trzecia.first->next->z << endl;
	cout << Trzecia.first->next->next->x << "\t" << Trzecia.first->next->next->y << "\t" << Trzecia.first->next->next->z << endl;
	return 0;
}