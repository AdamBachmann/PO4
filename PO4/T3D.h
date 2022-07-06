#pragma once
struct T3D
{
	double x;
	double y;
	double z;
	T3D* next;
	T3D() { next = 0; }
};