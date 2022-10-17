#ifndef __greska_h__
#define __greska_h__
#include<iostream>
using namespace std;
// Glavna klasa za rad sa izuzecima iz koje se izvode specificne klase
//izuzetaka.
class Greska {
protected:
	char* poruka; // nije neophodno
public:
	virtual void pisi(ostream& os) = 0;
	friend ostream& operator<<(ostream& os, Greska& g) {
		g.pisi(os); // polimorfizam
		return os;
	}
};
#endif