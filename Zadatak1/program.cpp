#include "funkcija.h"
#include "polinom.h"
#include "sinusoida.h"
#include "niz.h"
#include "greska.h"
void main() {
	try
	{
		Polinom* p = new Polinom(5);
		//cout << (*p)[8];
		Sinusoida* s = new Sinusoida();
		Sinusoida* s2 = new Sinusoida(3, 4, 0);
		Polinom* p2 = new Polinom(4);
		cout << *p << endl
			;
		cout << *s << endl
			;
		Niz* n = new Niz(3);
		n->dodaj(0, p);
		n->dodaj(1, s);
		n->dodaj(3, s2);
		cout << (*n)(5);
	}
	catch (GreskaPolinom& g2) {
		cout << "Doslo je do greske " << g2;
	}
	catch (Greska& g2) {
		cout << g2;
	}
}