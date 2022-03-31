#include <iostream>
#include <string> 
#include <sstream>

#pragma once

using namespace std;

class Vector3D
{
private:
	class Triad
	{
	private:

		int x, y, z;

	public:

		int get_x() const { return x; }
		int get_y() const { return y; }
		int get_z() const { return z; }

		void set_x(int x) { this->x = x; };
		void set_y(int y) { this->y = y; };
		void set_z(int z) { this->z = z; };

		void init(int x, int y, int z);
		void display() const;
		void read();

		Vector3D::Triad Sum(Triad a, int b);

		Vector3D::Triad Mult(Triad a, int b);

		bool Equal(Triad a);

		string toString() const;

	};
	Triad triad;

public:
	Vector3D::Triad get_Triad() const { return triad; }
	void set_Triad(Vector3D::Triad triad) { this->triad = triad; }

	void init(Vector3D::Triad triad);
	void display() const;
	void read();

	friend Vector3D Suma(Vector3D a, Vector3D b);

	friend int Scal(Vector3D a, Vector3D b);

	string ToString() const;
};

