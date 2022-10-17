#ifndef __sinusoida_h__
#define __sinusoida_h__
#include <cmath>
#include "funkcija.h"
class Sinusoida : public Funkcija {
	int a, b, c;
public:
	Sinusoida(int aa = 1, int bb = 1, int cc = 0) {
		a = aa; b = bb; c = cc;
	}
	// pri pozivanju, objekat Sinusoida s imace oblik s(3.5);
	double operator() (double x) {
		return a * sin(b * x + c);
	}
private:
	void citaj(istream& is) {
		is >> a >> b >> c; // isto kao kod cin
	}
	void pisi(ostream& os) {
		os << a << " * sin(" << b << "*x + " << c << ")"; // isto
		// kao kod cout
		// za a=3, b=1, c=5
		// izlaz ce imati oblik:
		// 3 * sin(1 * x + 5)
	}
};
#endif