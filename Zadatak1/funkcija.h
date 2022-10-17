#ifndef __funkcija_h__
#define __funkcija_h__
#include <iostream>
using namespace std;
class Funkcija {
	// apstraktne metode, moraju se definisati u klasama
	// koje je nasledjuju
	virtual void citaj(istream& is) = 0; // apstraktna
	// metoda
	virtual void pisi(ostream& os) = 0; // apstraktna
	// metoda
public:
	virtual double operator() (double x) = 0; // apstraktna
	// metoda
	// prijateljska opertorska funkcija za ulazni tok
	friend istream& operator>> (istream& is, Funkcija& f) {
		f.citaj(is); // polimorfizam
		return is;
	}
	// prijateljska operatorska funkcija za izlazni tok
	friend ostream& operator<< (ostream& os, Funkcija& f) {
		f.pisi(os); // polimorfizam
		return os;
	}
};
#endif