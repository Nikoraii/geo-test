#ifndef __greskapolinom_h__
#define __greskapolinom_h__
#include <iostream>
#include "greska.h"
using namespace std;
class GreskaPolinom : public Greska {
public:
	void pisi(ostream& os) {
		os << "***GRESKA: indeks koeficijenta polinoma van opsega!";
	}
};
#endif