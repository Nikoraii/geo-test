#ifndef __niz_h__
#define __niz_h__
#include "funkcija.h"
#include "greskaniz.h"
class Niz : public Funkcija {
	Funkcija** niz; // niz pokazivaca na objekte klase Funkcija
	int n;// broj elemenata niza
public:
	Niz(const int& nn = 5) {
		niz = new Funkcija * [n = nn]; // kreira se n pokazivaca na objekte klase funkcija
		for (int i = 0; i < n; niz[i++] = 0);
	}
	double operator() (double x) {
		// pri pozivanju, objekat Niz n -> n(3.5);
		double s = 0;
		for (int i = 0; i < n; i++)
			if (niz[i] != 0)
				s += (*niz[i])(x); // (*niz[i]) mora biti u zagradi jer operator ()
				// ima veci prioritet od operatora *
		return s;
	}
	void dodaj(int i, Funkcija* fu) {
		if (i < 0 || i >= n) // provera da li je dobar opseg
			throw GreskaNiz(); // u slucaju greske baca se izuzetak i tok
			// izvrsavanja prebacuje u catch blok ako ga ima ili
			// prekida izvrsavanje programa.
		if (niz[i] != 0) // ako postoji objekat na zadatoj adresi, treba ga
		// nistiti kako ne bi doslo do "curenja" memorije
			delete niz[i];
		niz[i] = fu;
	}
private:
	// ne treba nam
	void citaj(istream& is) { }
	void pisi(ostream& os) { }
};
#endif