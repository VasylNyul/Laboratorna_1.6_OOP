#include "Vector3D.h"
#include <iostream>

using namespace std;

void Vector3D::init(Vector3D::Triad triad)
{
	set_Triad(triad);
}

void Vector3D::display() const
{
	triad.display();
}

void Vector3D::read()
{
	Vector3D::Triad t;

	cout << endl;
	cout << "Triad = " << endl;
	t.read();

	init(t);
}

void Vector3D::Triad::init(int x, int y, int z)
{
	set_x(x);
	set_y(y);
	set_z(z);
}

void Vector3D::Triad::display() const
{
	cout << endl;
	cout << toString() << endl;
}

void Vector3D::Triad::read()
{
	int x, y, z;

	cout << endl;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "z = "; cin >> z;
	init(x, y, z);
}

Vector3D::Triad Vector3D::Triad::Sum(Triad a, int b)
{
	Triad s;


	s.x = a.x + b;
	s.y = a.y + b;
	s.z = a.z + b;

	return s;
}

Vector3D::Triad Vector3D::Triad::Mult(Triad a, int b)
{
	Triad m;

	m.x = a.x * b;
	m.y = a.y * b;
	m.z = a.z * b;

	return m;
}

Vector3D Suma(Vector3D a, Vector3D b)
{
	Vector3D ress;

	ress.triad.set_x(a.triad.get_x() + b.triad.get_x());
	ress.triad.set_y(a.triad.get_y() + b.triad.get_y());
	ress.triad.set_z(a.triad.get_z() + b.triad.get_z());

	return ress;
}

int Scal(Vector3D a, Vector3D b)
{
	return (a.triad.get_x() * b.triad.get_x() + a.triad.get_y() * b.triad.get_y() + a.triad.get_z() * b.triad.get_z());
}


bool Vector3D::Triad::Equal(Triad a)
{
	if (a.x == a.y)
		return true;
	if (a.x == a.z)
		return true;
	if (a.y == a.z)
		return true;
	if (a.x == a.y == a.z)
		return true;
	else
		return false;
}


string Vector3D::Triad::toString() const
{
	stringstream sout;

	sout << "(" << x << ", " << y << ", " << z << ")";
	

	return sout.str();
}

string Vector3D::ToString() const
{
	Vector3D::Triad t;
	t.toString();
}
