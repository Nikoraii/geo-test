#ifndef __polinom_h__
#define __polinom_h__
#include <iostream>
#include "funkcija.h"
#include "greskapolinom.h"
class Polinom : public Funkcija {
	int* p; // niz celih brojeva za koeficijente polinoma
	int n; // broje elemenata niza
	void citaj(istream& is) {
		for (int i = 0; i < n; i++)
			is >> p[i];
	}
	void pisi(ostream& os) {
		os << "[";
		for (int i = 0; i < n; i++)
			os << p[i] << (i < n - 1 ? ", " : "]");
	}
public:
	Polinom(const int& red) {
		p = new int[n = red];
		for (int i = 0; i < n; p[i++] = 1);
	}
	double operator() (double x) {
		double s = 0;
		for (int i = 0; i < n; i++)
			s += p[i] * pow(x, i);
		return s;
	}
	//Za objekat Polinom p, poziv ce se ostvariti naredbom p[3]
	int operator[] (int i) {
		if (i < 0 || i >= n) // provera da li je dobar opseg
		// u slucaju greske baca se izuzetak i tok izvrsavanja
		// prebacuje u catch blok ako ga ima ili prekida izvrsavanje
		// programa.
			throw GreskaPolinom();
		return p[i];
	}
};
#endif