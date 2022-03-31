#include <iostream>
#include "Vector3D.h"
#include <string> 

using namespace std;

int main()
{
	Vector3D v, c;
	Vector3D::Triad t, d, r;

	v.read(); cout << "Vector 1 = "; v.display();
	c.read(); cout << "Vector 2 = "; c.display();

	v.ToString();
	c.ToString();

	Vector3D k = Suma(v, c); cout << "Suma = "; k.display(); cout << endl;

	cout << "Scal9rnui dobutok vectoriv = " << Scal(v, c) << endl;

	t.read();
	
	cout << "Rivnistb = "; d.Equal(t); cout << endl;

	int b = 2;
	r = d.Sum(t, b);
	r = d.Mult(t, b);

	return 0;

}

